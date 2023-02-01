// Use the dha.h header file to implement
// the structure and its functions

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

#include "dfa.h"


// Constructor for a new DFA
DFA new_DFA(int nstates)
{
    DFA newDFA = (DFA)malloc(sizeof(struct DFA));
    newDFA->noOfStates = nstates;

    // Memory Allocation for Transition Table
    newDFA->transitionMatrix = (int**)malloc(nstates * sizeof(int*));
    for (int i = 0; i < nstates; i++)
    {
            newDFA->transitionMatrix[i] = (int *) malloc(ASCII_SIZE * sizeof(int));
    }

    // Memory Allocation for Accepting States - Use Calloc
    // Initialize Values to 0 (False)
    newDFA->acceptingStates = (bool*)calloc(nstates, sizeof(_Bool));

    return newDFA;

}

void DFA_free(DFA dfa)
{
    // Reverse Order of Memory Deallocation *Important*
    // Free Memory Allocated for Symbols/Alphabets (ASCII) First
    for (int j = 0; j < dfa->noOfStates; j++)
    {
        free(dfa->transitionMatrix[j]); // Does for each pointer to pointer
    }
    // Then Free Memory Allocated for Transition Table (States)
    free(dfa->transitionMatrix); // Does for the first pointer
    // Free Memory Allocated for Accepting States
    free(dfa->acceptingStates);
    // Free Memory Allocated for DFA
    free(dfa);

}

/*
 * Return the number of states in the given DFA.
 */

int DFA_get_size(DFA dfa)
{
    return dfa->noOfStates;
}

/*
 * Return the state specified by the given DFA's transition function from
 * state src on input symbol sym.
 */
int DFA_get_transition(DFA dfa, int src, char sym)
{
    return dfa->transitionMatrix[src][sym];
}

/*
 * For the given DFA, set the transition from state src on input symbol
 * sym to be the state dst.
 */
void DFA_set_transition(DFA dfa, int src, char sym, int dst)
{
    dfa->transitionMatrix[src][sym] = dst;
}

/*
 * Set the transitions of the given DFA for each symbol in the given str.
 * This is a nice shortcut when you have multiple labels on an edge between
 * two states.
 */
void DFA_set_transition_str(DFA dfa, int src, char *str, int dst)
{
    // Iterate over the string char array
    for(int i = 0; i < strlen(str); i++)
    {
        // Access each element in the char Array with loop index
        // Store the ASCII value of the char in a variable
        int strSym = str[i];
        // For the specified state set transition
        dfa->transitionMatrix[src][strSym] = dst;
    }
}

/*
 * Set the transitions of the given DFA for all input symbols.
 * Another shortcut method.
 */
void DFA_set_transition_all(DFA dfa, int src, int dst)
{
    for(int i = 0; i < ASCII_SIZE; i++)
    {
        dfa->transitionMatrix[src][i] = dst;
    }
}

/*
 * Set whether the given DFA's state is accepting or not.
 */
void DFA_set_accepting(DFA dfa, int state, bool value)
{
    dfa->acceptingStates[state] = value;
}

/*
 * Return true if the given DFA's state is an accepting state.
 */
bool DFA_get_accepting(DFA dfa, int state)
{
    return dfa->acceptingStates[state];
}

/*
 * Run the given DFA on the given input string, and return true if it accepts
 * the input, otherwise false.
 */
bool DFA_execute(DFA dfa, char *input) // Good Idea to track the current state here
{
    int currentState = 0;
    // Iterate over the input string
    for(int i = 0; i < strlen(input); i++)
    {
        // Track Current State Changes and store
        currentState = DFA_get_transition(dfa,currentState,input[i]);
    }

    // Get the truth value for the current state
    return DFA_get_accepting(dfa,currentState);
}




/*
 * Print the given DFA to System.out.
 */
void DFA_print(DFA dfa);

/*
int main()
{
    struct DFA *testDFA = new_DFA(10);
    // Testing
    // Set States
    DFA_set_transition(testDFA, 0, 'a', 1);
    DFA_set_transition(testDFA, 1, 'b', 2);
    DFA_set_transition(testDFA, 2, 'c', 3);
    DFA_set_transition(testDFA, 3, 'd', 4);
    DFA_set_transition(testDFA, 4, 'e', 5);


    DFA_set_accepting(testDFA, 5, 1);



    // Use Print Statements to Test
    // Get Transition Method
    printf("Transition from State 0 on Symbol 'a' is %d \n", DFA_get_transition(testDFA, 0, 'a'));

    printf("Transition from State 0 on Symbol 'b' is %d \n", DFA_get_transition(testDFA, 1, 'b'));

    printf("Transition from State 0 on Symbol 'c' is %d \n", DFA_get_transition(testDFA, 2, 'c'));

*/
/*    // Test DFA_set_transition_all method
    DFA_set_transition_all(testDFA, 6, 7);

    // Print the transitions for each symbol on state 6
    for(int i = 0; i < ASCII_SIZE; i++)
    {
        printf("Transition from State 6 on Symbol '%c' is %d \n", i, DFA_get_transition(testDFA, 6, i));
    }*//*



    // Test Get Accepting Method
    printf("State 5 is accepting? %d \n", DFA_get_accepting(testDFA, 5));


    DFA_free(testDFA);


    return 0;
}
*/


