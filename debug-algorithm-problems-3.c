**Arrange right flow**

  Statement 3) Read the program given below carefully and find out the right flow of control, from the given options.

#include <stdio.h>

void ram1()
{
    printf("Hello Daksh\n");
}

void Daksh1()
{
    printf("Hey Ram\n");
}

void ram2()
{
    printf("How's your mother's health now\n");
}

void Daksh2()
{
    printf("She is fine now\n");
}

void startconversation()
{
    ram1();
    Daksh1();
    ram2();
    Daksh2();
}

int main()
{
    startconversation();
    return 0;
}

Find the correct flow of control.

main()->startconversation()->main()->ram1()->main()->daksh1()->main()->ram2()->main()->daksh2()->main()

main()->startconversation()->ram1()->startconversation()->daksh1()->startconversation()->ram2()->startconversation()->daksh2()->startconversation()->main()

main()->startconversation()->ram1()->daksh1()->ram2()->daksh2()->startconversation()->main()

main()->startconversation()->ram1()->startconversation()->daksh1()->startconversation()->ram2()->startconversation()->daksh2()->main()

-------------------------------------------------------------------------------------------------
  SOLUTION = Correct Answer:

main()->startconversation()->ram1()->startconversation()->daksh1()->startconversation()->ram2()->startconversation()->daksh2()->startconversation()->main()

  ---------------Explanation:-
  The correct flow of control is:

main()->startconversation()->ram1()->daksh1()->ram2()->daksh2()->main()

Here's a detailed explanation of the flow:

Execution begins in the main function:
startconversation(); -> This line calls the startconversation function.
Control transfers to startconversation function:
ram1(); -> This line calls the ram1 function.
Inside ram1 function:
printf("Hello Daksh\n"); -> This line prints "Hello Daksh".
Control returns to startconversation function:
Daksh1(); -> This line calls the Daksh1 function.
Inside Daksh1 function:
printf("Hey Ram\n"); -> This line prints "Hey Ram".
Control returns to startconversation function:
ram2(); -> This line calls the ram2 function.
Inside ram2 function:
printf("How's your mother's health now\n"); -> This line prints "How's your mother's health now".
Control returns to startconversation function:
Daksh2(); -> This line calls the Daksh2 function.
Inside Daksh2 function:
printf("She is fine now\n"); -> This line prints "She is fine now".
startconversation function ends:
Control returns to the main function.
main function ends:
return 0; -> This line indicates successful program termination.
