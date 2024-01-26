**Basic String Operations 2**

Statement 4) SOLUTION = #include <stdio.h>
#include <string.h>

#define MAX_SIZE 1001

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        char a[MAX_SIZE], b[MAX_SIZE];
        scanf("%s", a);
        scanf("%s", b);

        //variable to store the count of '1's in A
        int a_count = 0;
        //variable to store the count of '1's in B
        int b_count = 0;
        //variable to store the count of indices where A[i] = B[i]
        int common = 0;

        // Count '1s' in A
        for (int i = 0; i < strlen(a); i++) {
            if (a[i] == '1') {
                a_count++;
            }
        }

        // Count '1s' in B
        for (int i = 0; i < strlen(b); i++) {
            if (b[i] == '1') {
                b_count++;
            }
        }

        // Count indices where A[j] = B[j]    
        for (int j = 0; j < strlen(a); j++) {
            if (a[j] == b[j]) {
                common++;
            }
        }

        printf("%d %d %d\n", a_count, b_count, common);
    }
    return 0;
}
