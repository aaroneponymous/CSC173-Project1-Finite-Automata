/*
 * File: nfa.h
 * Creator: George Ferguson
 * Created: Thu Sep  1 17:54:41 2016
 */

#ifndef _nfa_h
#define _nfa_h

#include <stdbool.h>
#include "Set.h"

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
// Use Recursion or
typedef struct NFA *NFA;

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

/**
 * Print the given NFA to System.out.
 */
extern void NFA_print(NFA nfa);

#endif
