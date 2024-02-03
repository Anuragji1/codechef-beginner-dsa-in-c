**Try to solve this problem using checkpoints**

--Statement) We have written the code in the ide to print the pattern given below.

*****
****
***
**
*
**
***
****
*****
Something is wrong with our code we need to debug it. \

Task
Uncomment the Checkpoint statement.
run the code
Try to analyze the code above the checkpoints and below the checkpoints.
Debug your code.
Comment the Checkpoints again.

------------------------------------------------------------------------------
SOLUTION = #include <stdio.h>

int main()
{
    for(int i=5; i>=1; i--)
    {
        for(int j=1; j<=i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    // printf("Checkpoint1 - first half of the code output\n");
    for(int i=2; i<=5; i++) // changed i to 2
    {
        for(int j=1; j<=i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
