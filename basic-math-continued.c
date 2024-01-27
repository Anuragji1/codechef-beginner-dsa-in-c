**Basic Math Continued**

SOLUTION = 
#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t); // Use scanf instead of cin
    
    while (t--)
    {
        int n;
        scanf("%d", &n);
        
        // declare an array to hold all divisors
        int divisors[n];
        int i = 1;
        int j = 0;
        
        while (i <= n)
        {  
            // check if n is divisible by each i
            if (n % i == 0)
            {
                // append each i to the array which meets this condition
                divisors[j] = i;
                // increment j to add element to (j+1)th position 
                j++;
            }
            
            i++;
        }
        
        // run a loop to traverse through the array whose length is j 
        for(int i = 0; i < j; i++)
        {
            printf("%d ", divisors[i]); // Use printf instead of cout
        }
        printf("\n"); // Use printf instead of cout
    }
    
    return 0;
}

---------------------------------Code Explanation :-
1. Header Inclusion:

#include <stdio.h>: Includes the standard input/output library for functions like scanf and printf.
2. Main Function:

int main(): The main function where program execution begins.
3. Input:

scanf("%d", &t);: Reads the number of test cases (t) from the user.
4. Test Case Loop:

while (t--): Iterates for each test case.
5. Input Within Loop:

scanf("%d", &n);: Reads the number (n) for which divisors need to be found.
6. Divisor Array:

int divisors[n];: Declares an array to store divisors of n (up to n itself).
7. Finding Divisors Loop:

while (i <= n): Iterates from 1 to n to check for divisors.
if (n % i == 0): If i divides n perfectly, it's a divisor.
divisors[j] = i;: Stores i in the divisors array.
j++;: Increments j to move to the next array index.
8. Printing Divisors:

for(int i = 0; i < j; i++): Loops through the divisors array.
printf("%d ", divisors[i]);: Prints each divisor.
printf("\n");: Prints a newline for formatting.
9. Function Return:

return 0;: Indicates successful program termination.
