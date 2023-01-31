
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "nfa.h"
#include "Set.h"



/*
 * Allocate and return a new NFA containing the given number of states.
 */
NFA new_NFA(int nstates)
{
    // Allocate memory for the NFA struct
    NFA nfa = (NFA)malloc(sizeof(struct NFA));
    nfa->noOfStates = nstates;
    // Allocate memory for Transition Matrix has a Set of states
    nfa->transitionMatrix = (Set**)malloc(nstates * sizeof(Set*));
    // Allocate memory for each state
    // Using the global constant ASCII_SIZE define in dfa.h
    // Should I set the head to null(?) or is it already null?
    for (int i = 0; i < nstates; i++)
    {
        nfa->transitionMatrix[i] = (Set *) malloc(ASCII_SIZE * sizeof(Set));
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
            free(nfa->transitionMatrix[i][j]);
        }
        free(nfa->transitionMatrix[i]);
    }
    free(nfa->transitionMatrix);
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
    // Add the state to the set of next states
    // from state src on input symbol sym
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

/*
 * Run the given NFA on the given input string, and return true if it accepts
 * the input, otherwise false.
 */
bool NFA_execute(NFA nfa, char *input)
{
    // 1. I want to keep track of what Meta State I am in that
    // gets updated only when I reach an accepting state
    // 2. When executing the NFA, when I see an input symbol
    // I want to find the set of states that I can go to
    // from the 2-D array of sets i.e. transitionMatrix
    // Once found, iterate through the set and follow the transitions
    // 3. If I reach an accepting state, I want to update the meta state
    // 4. If I reach the end of the input string, I want to check if the
    // meta state is an accepting state
    // 5. If it is, return true, else return false

}

/**
 * Print the given NFA to System.out.
 */
void NFA_print(NFA nfa);

