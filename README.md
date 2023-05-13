# simple_shell

This is a simple UNIX command interpreter that replicates functionalities of the simple shell (sh). Additional functions are also included. This program was written entirely in C as a milestone project for Alx-Holberton School.


## Tasks 

* Write a simple UNIX command interpreter.
* Who designed and implemented the original Unix operating system
* Who wrote the first version of the UNIX shell
* Who invented the B programming language (the direct predecessor to the C programming language)
* Who is Ken Thompson
* How does a shell work
* What is a pid and a ppid
* How to manipulate the environment of the current process
* What is the difference between a function and a system call
* How to create processes
* What are the three prototypes of main
* How does the shell use the PATH to find the programs
* How to execute another program with the execve system call
* How to suspend the execution of a process until one of its children terminates
* What is EOF / “end-of-file”?
* 
## Installation

Clone this repository into your working directory. Files should be compiled with GCC and the following flags: -Wall -Wextra -Werror -pedantic -Wno-format.

## Usage

After compilation, the resulting program can run stand-alone, either in interactive or non-interactive mode.

## Interactive Mode

In interactive mode, simply run the program and wait for the prompt to appear. From there, you can type commands freely, exiting with either the "exit" command or ctrl-D.

## Non-Interactive Mode

In non-interactive mode, echo your desired command and pipe it into the program like this:

echo "ls" | ./shell
In non-interactive mode, the program will exit after finishing your desired command(s).

## AUTHORS

This file contains the details of all the individuals that contributed to this shell project.

