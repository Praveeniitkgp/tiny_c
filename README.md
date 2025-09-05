# tiny_c
Compiler for tinyC
This project is a three-part compiler for 

tinyC, a subset of the C language



Flex for lexical analysis and Bison for parsing and code generation.

Project Structure
The compiler is built in three main stages:

Part 1: Lexical Analyzer (Lexer)

Uses Flex to scan the source code and convert it into a stream of tokens based on the tinyC lexical grammar.


Part 2: Parser

Uses Bison to parse the token stream according to the tinyC phrase structure grammar, ensuring syntactic correctness and generating a parse tree.



Part 3: 3-Address Code Generator

Integrates semantic actions into the Bison parser to translate the tinyC program into machine-independent 3-address code (quadruples) and manage a symbol table.
