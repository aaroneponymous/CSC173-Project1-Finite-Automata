#ifndef _main_h
#define _main_h

#include "dfa.h"
#include "nfa.h"



// DFA
extern DFA create_exactly_Aho();
extern DFA create_order_1_2_3();
extern DFA create_starting_1_or_2_or_3();
extern DFA create_odd_0_even_1();

// NFA



// REPLS: DFA & NFA

//extern void REPL_DFA(struct DFA* dfa)
//{
//    char* input = malloc(100);
//    while (true)
//    {
//        printf("
//}
extern void REPL_NFA(struct NFA* nfa);






#endif
