# Static Libraries in C
A library is a collection of code routines (functions, classes, variables, and so on) that can be called upon when building our program, so instead of writing it ourselves, we can go and get it from something that has already been written and optimized. That is where the idea behind libraries comes from. We are reusing blocks of codes that have come from somewhere else.

Basically, we have two kinds of libraries:

- static libraries
- shared (or dynamic) libraries
### NOTE: The main reason for writing a library is to allow code reusability, thus save considerable development time.

## What is a static library and how does it work?
A static library is a file containing a collection of object files ```(*.o)``` that are linked into the program during the linking phase of compilation and are not relevant during runtime.

Source: [All you need to know about static libraries](https://dev.to/iamkhalil42/all-you-need-to-know-about-c-static-libraries-1o0b)
