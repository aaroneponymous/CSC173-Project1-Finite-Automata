
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include "nfa.h"
#include "Set.h"



/*
 * Allocate and return a new NFA containing the given number of states.
 */
NFA new_NFA(int nstates)
{
    // Allocate memory for the NFA struct
    NFA nfa = (NFA)malloc(sizeof(struct NFA));

    // Initialize the fields
    nfa->noOfStates = nstates;
    nfa->currentStates = NULL;
    // Allocate memory for Transition Matrix has a Set of states
    nfa->transitionMatrix = (Set**)malloc(nstates * sizeof(Set*));
    // Allocate memory for each state
    // Using the global constant ASCII_SIZE define in dfa.h
    // Should I set the head to null(?) or is it already null?
    for (int i = 0; i < nstates; i++)
    {
        nfa->transitionMatrix[i] = (Set *)malloc(ASCII_SIZE * sizeof(Set));
    }
    // Initialize the transition matrix Sets to set with nstates int
    for (int i = 0; i < nstates; i++)
    {
        for (int j = 0; j < ASCII_SIZE; j++)
        {
            nfa->transitionMatrix[i][j] = new_Set(nstates);
        }
    }
    // Allocate memory for Accepting States
    nfa->acceptingStates = (bool*)calloc(nstates, sizeof(_Bool));
    return nfa;
}

/*
 * Free the given NFA.
 */
// For freeing the NFA completely
// Do I need to free the linked lists (Sets) using
// its free function too?
void NFA_free(NFA nfa)
{
    // Deallocate the memory allocated for the transition matrix
    // For each [j]th Set, free it and then free the pointer to it
    for (int i = 0; i < nfa->noOfStates; i++)
    {
        for (int j = 0; j < ASCII_SIZE; j++)
        {
            // Free the Set
            Set_free(nfa->transitionMatrix[i][j]);
            nfa->transitionMatrix[i][j] = NULL;
            free(nfa->transitionMatrix[i][j]);
        }

            Set_free(nfa->transitionMatrix[i]);
            nfa->transitionMatrix[i] = NULL;
            free(nfa->transitionMatrix[i]);
    }
    free(nfa->transitionMatrix);
    // Free the memory allocated for the current states Set
    Set_free(nfa->currentStates);
    // Free the memory allocated for the accepting states
    free(nfa->acceptingStates);
    // Free the memory allocated for the NFA
    free(nfa);
}

/*
 * Return the number of states in the given NFA.
 */
int NFA_get_size(NFA nfa)
{
    return nfa->noOfStates;
}

/*
 * Return the set of next states specified by the given NFA's transition
 * function from the given state on input symbol sym.
 */
Set NFA_get_transitions(NFA nfa, int state, char sym)
{
    // Return Set at the given state and symbol
    return nfa->transitionMatrix[state][sym];
}

/*
 * For the given NFA, add the state dst to the set of next states from
 * state src on input symbol sym.
 */
void NFA_add_transition(NFA nfa, int src, char sym, int dst)
{
        Set_insert(nfa->transitionMatrix[src][sym], dst);
}

/*
 * Add a transition for the given NFA for each symbol in the given str.
 */
void NFA_add_transition_str(NFA nfa, int src, char *str, int dst)
{
    // Add a transition for the given NFA for each symbol in the given str.
    // For each character in the string, add a transition
    for (int i = 0; str[i] != '\0'; i++)
    {
        // Set Insert
        Set_insert(nfa->transitionMatrix[src][str[i]], dst);
    }
}

/*
 * Add a transition for the given NFA for each input symbol.
 */
void NFA_add_transition_all(NFA nfa, int src, int dst)
{
    // Add a transition for the given NFA for each input symbol.
    // For each character in the ASCII table, add a transition
    for (int i = 0; i < ASCII_SIZE; i++)
    {
        // Set Insert

        Set_insert(nfa->transitionMatrix[src][i], dst);
    }
}

/*
 * Set whether the given NFA's state is accepting or not.
 */
void NFA_set_accepting(NFA nfa, int state, bool value)
{
    nfa->acceptingStates[state] = value;
}

/*
 * Return true if the given NFA's state is an accepting state.
 */
bool NFA_get_accepting(NFA nfa, int state)
{
    return nfa->acceptingStates[state];
}

bool NFA_execute(NFA nfa, char *input)
{
    if(!nfa->currentStates) {
        Set_free(nfa->currentStates);
    }
    nfa->currentStates = new_Set(nfa->noOfStates);
    Set_insert(nfa->currentStates, 0);
    return NFA_execute_helper(nfa, input, 0);

}

// Recursively go through the input string and check if the current states
// are accepting states
bool NFA_execute_helper(NFA nfa, char *input, int index) {
    if (input[index] == '\0') {
        SetIterator acceptIter = Set_iterator(nfa->currentStates);
        while (SetIterator_hasNext(acceptIter)) {
            int cur = SetIterator_next(acceptIter);
            if (nfa->acceptingStates[cur] == true) {
                free(acceptIter);
                return true;
            }
        }
        free(acceptIter);
        return false;
    }

    Set temp = new_Set(nfa->noOfStates);
    SetIterator currIter = Set_iterator(nfa->currentStates);

    while (SetIterator_hasNext(currIter)) {
        int curr = SetIterator_next(currIter);
        Set_union(temp, NFA_get_transitions(nfa, curr, input[index]));
    }
    free(currIter);
    Set_free(nfa->currentStates);
    nfa->currentStates = temp;
    Set_union(nfa->currentStates, temp);

    return NFA_execute_helper(nfa, input, index + 1);
}


/*
 * Run the given NFA on the given input string, and return true if it accepts
 * the input, otherwise false.
 */
/*bool NFA_execute(NFA nfa, char *input)
{
    // How do I run branches?
    // Iterate through the input string
    // For each character, get the transitions and add them to the potential
    // next states and iterate through the next states and repeat the process
    // while unionizing the next states with the current states
    // If the current states is empty, return false
    // If the current states is not empty, iterate through the current states
    // and check if any of them are accepting states
    // If any of them are accepting states, return true
    // If none of them are accepting states, return false


}*/



