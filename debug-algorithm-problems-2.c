**Flow of control continued**

  Problem Statement Q2) Read the program given below carefully and find out the right flow of control, from the given options.

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

MCQ.) Find the correct flow of control.

main()->name()->main()->reply()->main()

main()->name()->reply()

name()->main()->reply()->main()

name()->reply()->main()

main()->name()->main()->reply()

----------------------------------------------------------------
SOLUTION = Correct Answer:

main()->name()->main()->reply()->main()

--------------Explanation:- 
  Execution begins in the main function:
printf("Hello bro, What is your name\n"); -> This line prints the initial greeting.
name function is called:
name(); -> This line executes the name function.
Inside name function:
printf("My name is Krish\n"); -> This line prints the name "Krish".
Control returns to main function:
printf("How you doing Krish\n"); -> This line prints the follow-up question.
reply function is called:
reply(); -> This line executes the reply function.
Inside reply function:
printf("Doing great\n"); -> This line prints the response "Doing great".
main function ends:
return 0; -> This line indicates successful program termination.

 --------------Output= Hello bro, What is your name
My name is Krish
How you doing Krish
Doing great

