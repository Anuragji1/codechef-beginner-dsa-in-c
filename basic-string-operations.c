**Basic String Operations 3**

#include <stdio.h>
#include <string.h>

int main() {
    int t;
    scanf("%d", &t);
    
    while (t--) {
        // Treat A as a string instead of an integer
        char A[1001];
        scanf("%s", A);
        
        int flag = 0;
        for (int i = 0; i < strlen(A); i++) {
            // If any '0' or '5' is found in the string A - then set flag as 1 and exit the loop
            if (A[i] == '0' || A[i] == '5') {
                flag = 1;
                break;
            }
        }
        
        if (flag == 1) {
            printf("Yes\n");
        } else {
            printf("No\n");
        }
    }
    
    return 0;
}
