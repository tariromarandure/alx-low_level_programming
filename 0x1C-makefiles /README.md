0x1C. C - Makefiles
Introduction
The Makefile is a build automation tool that allows programmers to automate the building and compiling of complex projects. It's often used in combination with C projects, where the build process can quickly become tedious and error-prone.

In this repository, we will explore the basics of Makefiles in C programming, how to create them, and how to use them effectively to manage project builds and dependencies.

What is a Makefile?
A Makefile is a build automation tool that uses a set of rules to build and compile code. It takes a list of dependencies and commands, and it will execute those commands only if a dependency has been updated since the last build.

Makefiles can be used to automate the build process for any programming language or platform, but they are most commonly associated with C programming.

How to Create a Makefile
A Makefile is a simple text file that can be created with any text editor. The basic syntax of a Makefile is as follows:

target: dependencies
	commands
The target is the name of the rule you want to create. The dependencies are the files or targets that the rule depends on. The commands are the actions that are executed to build the target.

Here is an example Makefile that builds a sample C program:

CC = gcc
CFLAGS = -Wall -Werror -Wextra -pedantic

all: hello_world

hello_world: hello_world.o
	$(CC) $(CFLAGS) -o hello_world hello_world.o

hello_world.o: hello_world.c
	$(CC) $(CFLAGS) -c hello_world.c

clean:
	rm -f *.o hello_world
In this example, we define the C compiler and flags that we want to use. We then create a rule called "all," which depends on a target called "hello_world." The "hello_world" target depends on a file called "hello_world.o." The commands for the "hello_world" target compile the object file and link it into an executable. The "hello_world.o" target compiles the C source file into an object file. Finally, we define a "clean" target that removes any object files and executables.

Running a Makefile
To run a Makefile, you simply need to type "make" in the terminal. The Make tool will then read the Makefile and execute the commands necessary to build the target you specified.

$ make hello_world
In this example, we build the "hello_world" target defined in the Makefile.

Makefile Best Practices
When creating a Makefile, there are several best practices that you should follow to ensure that your build process is as efficient and error-free as possible:

Use variables for common settings, such as the compiler and flags.
Define a "clean" target to remove any generated files.
Use dependency chains to ensure that files are compiled in the correct order.
Use wildcards to simplify the process of generating lists of files.
Use suffix rules or pattern rules to avoid duplicating rules for similar files.
Use phony targets to define targets that don't correspond to files.
Tasks
0x1C. C - Makefiles
1. Makefile
2. Makefile
3. Makefile
4. A complete Makefile
5. Island Perimeter
6. make -f 100-Makefile
7. Create a new Makefile
