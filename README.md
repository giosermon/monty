# The Monty language

Monty 0.98 is a scripting language that is first compiled into Monty byte codes (Just like Python). It relies on a unique stack, with specific instructions to manipulate it. The goal of this project is to create an interpreter for Monty ByteCodes files.

Learning Objectives

At the end of this project, you are expected to be able to explain to anyone, without the help of Google:
General

    What do LIFO and FIFO mean
    What is a stack, and when to use it
    What is a queue, and when to use it
    What are the common implementations of stacks and queues
    What are the most common use cases of stacks and queues
    What is the proper way to use global variables

Requirements
General

    Allowed editors: vi, vim, emacs
    All your files will be compiled on Ubuntu 14.04 LTS
    Your programs and functions will be compiled with gcc 4.8.4 using the flags -Wall -Werror -Wextra and -pedantic
    All your files should end with a new line
    A README.md file, at the root of the folder of the project is mandatory
    Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl
    You allowed to use a maximum of one global variable
    No more than 5 functions per file
    You are allowed to use the C standard library
    The prototypes of all your functions should be included in your header file called monty.h
    Don’t forget to push your header file
    All your header files should be include guarded
    You are expected to do the tasks in the order shown in the project


    The commands coded into the interpretor are as follows:    

push

    Usage: push <int>
    Pushes an element to the stack.
    The parameter <int> must be an integer.

    pall - prints the stack contents starting from the top

    pint - prints the first element on the top of the stack

    pop - deletes the top element of the stack

    swap - swaps the first two elements of the stack

    add - adds the first two elements of the stack

    nop - does not do anything 
