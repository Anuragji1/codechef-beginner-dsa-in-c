**Flow of Control Introduction**

Statement) Previously we have learned Basic Debugging Module and now we will deep dive in it.

In this module we are going to learn the "Flow of control" ,"Tracing key variable" ,"Checkpoint" and "Unit testing".

First, we are going to learn the flow of control.
Do you have any understanding of the concept of "flow of control"?
Whenever you compile your program in C or any other language, how your compiler reads the program determines the program's flow of control.

Generally the compiler first searches for the main function and then reads line by line in the main function until there is a breakpoint or function calling which changes the flow of control.

Review the code below carefully to understand the flow of control.

#include <stdio.h>

void name()
{
    printf("My name is Krish\n");
}

void reply()
{
    printf("Doing great\n");
}

int main()
{
    printf("Hello bro, What is your name\n");
    name();
    printf("How you doing Krish\n");
    reply();
    return 0;
}
Let's see how the flow of control is working in the above program and how our compiler reads it.

We start from the main function.
The first line of the main function conatins print statement so we print Hello bro, What is your name.
The second line calls a function name(), so we need to stop reading the main function for now until we completely read the name function.
The first line of the name function contains print statement so we print My name is Krish.
The name function gets finished so we move back to the main function.
The third line of the main function is a print statement so we again printed How you doing Krish
In the fourth line of the main function there is a function call so now we will read the reply function first then continue our main function.
The first line of the reply function is a print statement so we printed Doing great.
The reply function gets executed so we move back to the main function.
The main function is also terminated.
