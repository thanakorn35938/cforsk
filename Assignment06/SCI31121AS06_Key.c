#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    
    if (n == 0) {
        printf("no");
    } else {
        int results[n];
        for (int x = 1; x <= n; x++) {
            results[x-1] = x * x + x - 4;
        }
        
        for (int i = 0; i < n; i++) {
            printf("%2d\n", results[i]);
        }
    }
    
    return 0;
}
