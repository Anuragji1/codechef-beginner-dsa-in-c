**Basic String Operation 1**

Statement 3) Create a replica string
Let's begin with a problem which covers our knowledge of 'String' syntax.

You are given a string 
�
S consisting of only lowercase english characters.
You need to generate 2 separate strings 
�
A and 
�
B

String 
�
A needs to be an exact replica of string 
�
S - it has to be created by starting with an empty string
String 
�
B is reverse of string 
�
S.
Input Format
The first line will contain 
�
t - the number of test cases. Then the test cases follow
Each line of the test case consists of a single line of input - the string 
�
S
Output Format
Each test case will contain 2 lines of output
Line 1: Output string 
�
A
Line 2: Output string 
�
B
Sample 1:
--Input = 3
abcde
aaaaa
aaaab

--Output = abcde
edcba
aaaaa
aaaaa
aaaab
baaaa

Explanation:
Test case 1: 
�
S is 
�
�
�
�
�
abcde

�
A becomes 
�
�
�
�
�
abcde
�
B becomes 
�
�
�
�
�
edcba
Test case 3: 
�
S is 
�
�
�
�
�
aaaab

�
A becomes 
�
�
�
�
�
aaaab
�
B becomes 
�
�
�
�
�
baaaa

  SOLUTION = #include <stdio.h>
#include <string.h>

int main() {
    int t;
    scanf("%d", &t); // read the number of test cases
    
    for (int i = 0; i < t; i++) { // iterate through each test case
        char S[1001], A[1001], B[1001];
        scanf("%s", S); // read the input string
        
        int len = strlen(S); // find the length of the string
        
        // copy the string S into the string A
        for (int j = 0; j < len; j++) {
            A[j] = S[j];
        }
        A[len] = '\0'; // add a null terminator to the end of the string A
        
        // copy the string S into the string B in reverse order
        int index = 0;
        for (int j = len - 1; j >= 0; j--) {
            B[index] = S[j];
            index++;
        }
        B[len] = '\0'; // add a null terminator to the end of the string B
        
        // print the strings A and B
        printf("%s\n%s\n", A, B);
    }
    return 0;
}

