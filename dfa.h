/*
 * File: dfa.h
 * Creator: George Ferguson
 * Created: Thu Sep  1 17:45:52 2016
 */

#ifndef _dfa_h
#define _dfa_h

#define ASCII_SIZE 128 // Global Constant set to ASCII Range

#include <stdbool.h>

/**
 * The data structure used to represent a deterministic finite automaton.
 * @see FOCS Section 10.2
 * Note that YOU must specify this data structure, although you can hide
 * (encapsulate) its implementation behind the declared API functions and
 * only provide a partial declaration in the header file.
 */
typedef struct DFA *DFA;

// For DFA the fields should be:
/*
 * 1. number of states (passed to constructor)
 */

// 3. Transition Table (2-D Array)
/*
 * How would I represent it? Sparse matrix? 2D array?
 * Will have states as rows and symbols as columns
 * Now, the question is how do I represent the symbols? ASCII?
 *
 *
 * Do I initialize a table with (128) columns? To account for all the possible alphabets?
 * Is there any other way to do that? How can I show not "a" then transition to different state
 * in a memory efficient way rather than allocating memory for all the possible alphabets?
 * Indices represent the states and the values (ASCII Range) represent the next state
 *
*/

// 4. Accepting states (1-D Array with Boolean Values)
/*
 * Do I just create another sparse matrix with states as rows and boolean value as a column?
 * Is there a better way to flag it as accepting state?
 * Do I create another struct to hold the accepting states? Will be difficult to access
 * and would have to specify allocating memory for the struct and then the array
 * Separate Array to hold the accepting states, 1-D array with state number as index and boolean
 *
 */

struct DFA
{
    int noOfStates;

    // pointer to a pointer to an int (2D array)
    // transitionMatrix: states as 1 Array (Indices) and ASCII symbol 2 (Indices)
    int **transitionMatrix;

    // pointer to an int (1D array)
    // Stores Boolean for Accepting & Rejecting States
    // False 0, True 1
    bool *acceptingStates;
};



/**
 * Allocate and return a new DFA containing the given number of states.
 */
extern DFA new_DFA(int nstates);

/**
 * Free the given DFA.
 */
extern void DFA_free(DFA dfa);

/**
 * Return the number of states in the given DFA.
 */
extern int DFA_get_size(DFA dfa);

/**
 * Return the state specified by the given DFA's transition function from
 * state src on input symbol sym.
 */
extern int DFA_get_transition(DFA dfa, int src, char sym);

/**
 * For the given DFA, set the transition from state src on input symbol
 * sym to be the state dst.
 */
extern void DFA_set_transition(DFA dfa, int src, char sym, int dst);

/**
 * Set the transitions of the given DFA for each symbol in the given str.
 * This is a nice shortcut when you have multiple labels on an edge between
 * two states.
 */
extern void DFA_set_transition_str(DFA dfa, int src, char *str, int dst);

/**
 * Set the transitions of the given DFA for all input symbols.
 * Another shortcut method.
 */
extern void DFA_set_transition_all(DFA dfa, int src, int dst);

/**
 * Set whether the given DFA's state is accepting or not.
 */
extern void DFA_set_accepting(DFA dfa, int state, bool value);

/**
 * Return true if the given DFA's state is an accepting state.
 */
extern bool DFA_get_accepting(DFA dfa, int state);

/**
 * Run the given DFA on the given input string, and return true if it accepts
 * the input, otherwise false.
 */
extern bool DFA_execute(DFA dfa, char *input);

/**
 * Print the given DFA to System.out.
 */
extern void DFA_print(DFA dfa);

#endif
