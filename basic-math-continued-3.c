**Output all digits of a number**

Statement) Output all digits of a number
Let us solve the same problem that we did previously - but lets take a different approach this time.
Recall that a string can also have numeric characters.
Can the string approach help us solve this problem in an easier manner?

Problem statement
You are given an integer 
�
N.
You need to create and output to the console all the digits of this integer, each separated by a space.

Input format

The first line of input will contain a single integer 
�
T, denoting the number of test cases.
Each test case consists of a single line of input - the integer 
�
N.

-----------------------------------------------------------------
SOLUTION = #include <stdio.h>
#include <string.h>

int main() 
{
    int t;
    scanf("%d", &t);
    
    while(t--)
    {
        // declare N as a string instead of an integer
        char N[100];
        scanf("%s", N);
        // array to hold all integers of the number
        int final_ans[strlen(N)];
        
        for(int i = 0; i < strlen(N); i++)
        {
            // Convert the elements in the string N to integer(by subtracting '0' from each character) and insert it to the array
            final_ans[i] = N[i]-'0';
        }
       
        for(int i = 0; i < strlen(N); i++)
        {
            printf("%d ", final_ans[i]);
        }
        
        printf("\n");
    }
    
    return 0;
}
