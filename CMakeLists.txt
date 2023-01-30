cmake_minimum_required(VERSION 3.18)
project(Project2)

set(CMAKE_C_STANDARD 99)

include_directories(.)

add_executable(Project2
        makeDfaNfa.c
        makeDfaNfa.h
        BitSet.c
        BitSet.h
        dfa.c
        dfa.h
        IntHashSet.c
        IntHashSet.h
        LinkedList.c
        LinkedList.h
        nfa.h
        Set.h
        strdup.c
        strdup.h
        )