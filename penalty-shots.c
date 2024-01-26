**Practice problem - Penalty Shots**  --Difficulty:  925

Solution = 
#include <stdio.h>

int main() 
{
    int t;
    scanf("%d", &t);
    
    while(t--)
    {
        int A[10];
        for(int i = 0; i < 10; i++)
        {
            scanf("%d", &A[i]);
        }
        //Calculate and store Team-1 and Team-2 scores
        int team1 = A[0] + A[2] + A[4] + A[6] + A[8];
        int team2 = A[1] + A[3] + A[5] + A[7] + A[9];
        // Apply relevant conditions to check for victory
        if (team1 > team2)
        {
            printf("1\n");
        }
        else if (team1 < team2)
        {
            printf("2\n");
        }
        else 
        {
            printf("0\n");
        }
    }
    return 0;
}
