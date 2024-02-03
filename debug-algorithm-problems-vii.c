**Problems using checkpoints and key variable**

Problem Statement last) Write a program to do two tasks given a number n.

Print a number in reverse order removing the digit greater than 5.
Print the product of all digits of the number.
Task
Run the code to see the output.
Create checkpoints and analyze which checkpoint is giving the wrong answer.
Create key variable and check where the variable is going wrong.
Try to think about the expected output for the key variable and the given output
Analyze the result and debug this code.
Sample 1:
Input - 123456
Output - 54321
720
Sample 2:
Input - 918735
Output - 531
7560

--------------------------------------------------------------------------------------------------------
SOLUTION = #include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int n1 = n;
    int m1 = 0;
    while(n1!=0)
    {
        int digi = n1%10;  // fetching last digit of n1 
        if(digi<=5)
        {
            m1 = m1*10+digi; // adding last digit of n1 to m1
        }
        n1 /= 10;  // removing digit from n1 
    }
    printf("%d\n", m1); // printed the number removing odd digit.

    int product = 1; // changed initialization from 0 to 1
    n1 = n;
    while(n1!=0)
    {
        int digi = n1%10; // fetching last digit of n1 
        product *= digi;      // multiplying last digit of n1 to product
        n1 /= 10;          // removing last digit of n1 
    }
    printf("%d\n", product);

    return 0;
}
