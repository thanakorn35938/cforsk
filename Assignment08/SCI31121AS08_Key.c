#include <stdio.h>

int main() {
    int i, j;
    int startRow = 6, endRow = 9;
    int startCol = 1, endCol = 12;

    printf("Multiplication Chart (6-9 with 1-12):\n");

    for (j = startCol; j <= endCol; j++) {
        for (i = startRow; i <= endRow; i++) {
            printf("%d * %d = %d\t", i, j, i * j);
        }
        printf("\n");
    }

    return 0;
}
//This program is created by Thanakorn Buathongtanakarn.
//Sponsored by GitHub Corporation, Microsoft Corporation.