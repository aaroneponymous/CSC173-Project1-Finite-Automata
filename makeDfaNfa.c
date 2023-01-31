#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

#include "makeDfaNfa.h"
#include "dfa.h"


// DFA for exactly the string "Aho"
DFA create_exactly_Aho()
{
    DFA exactlyAho = new_DFA(5);
    DFA_set_accepting(exactlyAho, 3, true);
    DFA_set_transition_all(exactlyAho, 0, 4);
    DFA_set_transition_all(exactlyAho, 1, 4);
    DFA_set_transition_all(exactlyAho, 2, 4);
    DFA_set_transition_all(exactlyAho, 3, 4);
    DFA_set_transition_all(exactlyAho, 4, 4);

    DFA_set_transition(exactlyAho, 0, 'A', 1);
    DFA_set_transition(exactlyAho, 1, 'h', 2);
    DFA_set_transition(exactlyAho, 2, 'o', 3);

    return exactlyAho;
}

// DFA for 1 2 3 in order
DFA create_order_1_2_3()
{
    DFA order123 = new_DFA(4);
    DFA_set_accepting(order123, 3, true);
    DFA_set_transition_all(order123, 0, 0);
    DFA_set_transition_all(order123, 1, 1);
    DFA_set_transition_all(order123, 2, 2);
    DFA_set_transition_all(order123, 3, 3);

    DFA_set_transition(order123, 0, '1', 1);
    DFA_set_transition(order123, 1, '2', 2);
    DFA_set_transition(order123, 2, '3', 3);

    return order123;
}

// DFA for 1 or 2 or 3 at the start
DFA create_starting_1_or_2_or_3()
{
    DFA starting123 = new_DFA(3);
    DFA_set_accepting(starting123, 1, true);
    DFA_set_transition_all(starting123, 0, 2);
    DFA_set_transition_all(starting123, 1, 1);
    DFA_set_transition_all(starting123, 2, 2);

    DFA_set_transition_str(starting123, 0, "123", 1);

    return starting123;
}

// DFA for odd 0 even 1
DFA create_odd_0_even_1()
{
    DFA odd0even1 = new_DFA(3);
    DFA_set_accepting(odd0even1, 2, true);
    DFA_set_transition_all(odd0even1, 0, 1);
    DFA_set_transition_all(odd0even1, 1, 0);

    DFA_set_transition(odd0even1, 0, '0', 0);
    DFA_set_transition(odd0even1, 0, '1', 1);
    DFA_set_transition(odd0even1, 1, '0', 1);
    DFA_set_transition(odd0even1, 1, '1', 0);

    return odd0even1;
}

//matches strings that end in "man"
NFA build_match_end_man(){
    NFA endMAN = new_NFA(4);
    NFA_add_transition_all(endMAN, 0,0);
    NFA_add_transition(endMAN, 0, 'm', 1);
    NFA_add_transition(endMAN, 1, 'a', 2);
    NFA_add_transition(endMAN, 2, 'n', 3);
    NFA_set_accepting(endMAN, 3, true);
    return endMAN;
}

int main()
{

//    char *str = "Aho";
//    // DFA for exactly the string "Aho"
//    // Execute the DFA on the command line
//    DFA exactlyAho = create_exactly_Aho();
//    // Withing the printf pass the DFA and the string in execute DFA function
//    // and print the result truth value
//    printf("Accepted? : %d", DFA_execute(exactlyAho, str));
//    DFA_free(exactlyAho);



/*    // DFA for 1 2 3 in order Testing
    char *str = "3132";
    DFA order123 = create_order_1_2_3();
    printf("Accepted? : %d", DFA_execute(order123, str));
    DFA_free(order123);


    // DFA for 1 or 2 or 3 at the start Testing
    char *str = "523";
    DFA starting123 = create_starting_1_or_2_or_3();
    printf("Accepted? : %d", DFA_execute(starting123, str));
    DFA_free(starting123);*/

    // Test NFA: String that ends with man
    char *str = "Heminman";
    NFA man = build_match_end_man();
    printf("Accepted? : %d", NFA_execute(man, str));
    NFA_free(man);


    return 0;
}
