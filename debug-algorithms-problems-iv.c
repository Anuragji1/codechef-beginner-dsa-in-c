**Debugging problem using checkpoints**

--#include <stdio.h>

int main()
{
    for(int i=0; i<=3; i++)
    {
        for(int j=0; j<=i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    // printf(" Checkpoint1 - the above code comes under checkpoint1\n");
    for(int i=0; i<5; i++) // Changed the loop condition to i<5
    {                     
        printf("*");
    }
    printf("\n");
    // printf(" Checkpoint2 - the above code comes under checkpoint2\n");
    for(int i=3; i>=0; i--)
    {
        for(int j=0; j<=i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    // printf(" Checkpoint3 - the above code comes under checkpoint3\n");

    return 0;
}
