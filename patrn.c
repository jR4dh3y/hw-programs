#include <stdio.h>

int main() {
    int a = 0, i = 0, j = 0;
    printf("Enter a number: ");
    scanf("%d", &a);
    for (i = 1; i <= a; i++) {
        for (j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}