# DFA-Simulation

## Introduction
A deterministic finite automaton (DFA)—also known as deterministic finite state machine—is a finite state machine that accepts/rejects finite strings of symbols and only produces a unique computation (or run) of the automaton for each input string. 'Deterministic' refers to the uniqueness of the computation. -- 

## Objectives

1. Successful understanding/implementation DFA in C/C++/Java
Tools/Software Requirement
1. gcc, g++, GNU Make or Xcode
## Description
A DFA is defined as an abstract mathematical concept, but due to the deterministic nature of a DFA, it is implementable in hardware and software for solving various problems. For example, a DFA can model software that decides whether or not online user-input such as email addresses are valid. DFAs recognize exactly the set of regular languages which are, among other things, useful for doing lexical analysis and pattern matching.

## 1. Consider the following Regular Expression:
            a(bb)*bc

a. Draw a DFA for the above RE.
b. Determine the language accepted by this automaton
c. Implement this DFA in C/C++/Java.
   i. Your implementation should validate the input string for alphabet i.e. Σ = {a, b, c}, before using it in the DFA.
   ii. Your first implementation of DFA should use goto statements only.
   iii. Your second implementation of DFA should use switch statement instead of the goto’s.
d. Test your implementation using the following inputs:
abc, abbc, abcd, abbbc, abbbbc

## 2. Consider the following language:
  L(M) = {w | w € {a, b}* and contains even number of a’s and b’s}
a. Draw a DFA for the above language
   i. Your implementation should validate the input string for alphabet
   i.e. Σ = {a, b}, before using it in the DFA.
   ii. Your first implementation of DFA should use goto statements only.
   iii. Your second implementation of DFA should use switch statement
   instead of the goto’s.
b. Test your implementation using the following inputs:
aa, ab, aba, abab, aabbaabb
