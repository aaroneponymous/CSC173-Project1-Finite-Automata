/*
 * File: nfa.h
 * Creator: George Ferguson
 * Created: Thu Sep  1 17:54:41 2016
 */

#ifndef _nfa_h
#define _nfa_h

#include <stdbool.h>
#include "Set.h"
#include "LinkedList.h"
#include "dfa.h"

/**
 * The data structure used to represent a nondeterministic finite automaton.
 * @see FOCS Section 10.3
 * @see Comments for DFA in dfa.h
 */

// NFA Potential Implementation:
// Withing the structure I can
// 1. noOfStates as an int

// 2. How do I represent the transition matrix with sets of states?
// Once that is achieved, think about how do I follow the input symbol
// to the sets of states, for each one of them follow to the end until of
// the string is reached, or the path ends, and then check if the last state
// is an accepting state or dead state (or leads to phi)

// Represent a 2-D array with states as rows and symbols as columns
// Each cell will be a set of states
// What data structure to use for the set of states?
// I can use a linked list of states, but will that be inefficient?

// If I do use a linked list, for each state in a set of states, I will have to
// iterate through the list one by one, and for each one of the list elements
// potentially iterate through the transition matrix to find the next set of states
// and iterate over them until the end of the string is reached or the path ends (dead state/false state)
// and then go back to the initial state and iterate through the next element in the list
// Use Recursion or keep track of the current state and the current symbol
// and then iterate through the transition matrix to find the next set of states
// and then iterate through the next set of states until the end of the string is reached
// or the path ends (dead state/false state)

/** Final Decision: Just use the Set data structure to represent the set of states (Don't make it harder than its
 supposed to be) */

// I'll try Recursion and then see what happens(?)

// What do I need in the struct NFA then?
// 1. noOfStates as an int
// 2. transition matrix as a 2-D array of sets of states (pointer to a pointer to a set of states)
// 3. accepting states as a 1-D array of boolean values (pointer to a boolean)
// 4. do I need an initial state tracker? That could potentially hold the value of the current state
// while the recursion is happening? Current Set that stores possible sets of state transition should be dynamic?

typedef struct NFA *NFA;

struct NFA
{
    int noOfStates;
    // Pointer to a pointer to a set of states (Set)
    Set currentStates; // Stack (Memory) --> Keep track of possible current states
    Set **transitionMatrix;
    bool *acceptingStates;
};

/**
 * Allocate and return a new NFA containing the given number of states.
 */
extern NFA new_NFA(int nstates);

/**
 * Free the given NFA.
 */
extern void NFA_free(NFA nfa);

/**
 * Return the number of states in the given NFA.
 */
extern int NFA_get_size(NFA nfa);

/**
 * Return the set of next states specified by the given NFA's transition
 * function from the given state on input symbol sym.
 */
extern Set NFA_get_transitions(NFA nfa, int state, char sym);

/**
 * For the given NFA, add the state dst to the set of next states from
 * state src on input symbol sym.
 */
extern void NFA_add_transition(NFA nfa, int src, char sym, int dst);

/**
 * Add a transition for the given NFA for each symbol in the given str.
 */
extern void NFA_add_transition_str(NFA nfa, int src, char *str, int dst);

/**
 * Add a transition for the given NFA for each input symbol.
 */
extern void NFA_add_transition_all(NFA nfa, int src, int dst);

/**
 * Set whether the given NFA's state is accepting or not.
 */
extern void NFA_set_accepting(NFA nfa, int state, bool value);

/**
 * Return true if the given NFA's state is an accepting state.
 */
extern bool NFA_get_accepting(NFA nfa, int state);

/**
 * Run the given NFA on the given input string, and return true if it accepts
 * the input, otherwise false.
 */
extern bool NFA_execute(NFA nfa, char *input);

extern bool NFA_execute_helper(NFA nfa, char *input, int index);

/*extern void NFA_REPL()
{
    char inputString [100];


}*/

/**
 * Print the given NFA to System.out.
 */
extern void NFA_print(NFA nfa);

#endif
