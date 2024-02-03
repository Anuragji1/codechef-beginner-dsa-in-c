**Problems using checkpoints with key variable**

Statement) Write a program to do two tasks given a number n

Print a number in reverse order removing the odd digit.
Print Sum of all digits of the number.
Task
Run the code to see the output.
Uncomment the two checkpoints and analyze which checkpoint is giving the wrong answer.
Uncomment the key variable and check where the variable is going wrong.
Try to think about the expected output for the key variable and the given output
Analyze the result and debug this code.
Sample 1:
Input - 123456
Output - 642
21

Sample 2:
Input - 43264854
Output - 484624
36

------------------------------------------------------------------------------------------------------
SOLUTION = #include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int n1 = n;
    int m1 = 0;
    while(n1 != 0)
    {
        int digi = n1 % 10;  // fetching last digit of n1 
        if(digi % 2 == 0)
        {
            m1 = m1 * 10 + digi; // adding last digit of n1 to m1
        }
        n1 /= 10;  // removing digit from n1 
    }
    printf("%d\n", m1); // printed the number removing odd digit.
    
    int sum = 0;
    n1 = n;
    while(n1 != 0)
    {
        int digi = n1 % 10; // fetching last digit of n1 
        sum += digi;      // adding last digit of n1 to sum
        n1 /= 10;         // removing last digit of n1 
        // printf("%d %d sum and current number\n", sum, n1);  // analyzing the key variables.
    }
    printf("%d\n", sum);
    // printf("Checkpoint2\n"); 
    // finding there is an error in checkpoint2.
  
    return 0;
}
