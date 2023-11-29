#include <stdio.h>

int main() {
    int evenSum = 0, oddSum = 0;
    int evenNumbers[5], oddNumbers[5];
    int evenIndex = 0, oddIndex = 0;

    for (int i = 1; i <= 10; i++) {
        if (i % 2 == 0) {
            evenSum += i;
            evenNumbers[evenIndex] = i;
            evenIndex++;
        } else {
            oddSum += i;
            oddNumbers[oddIndex] = i;
            oddIndex++;
        }
    }

    printf("Even numbers: ");
    for (int i = 0; i < evenIndex; i++) {
        printf("%d ", evenNumbers[i]);
    }
    printf("\nEven sum: %d\n", evenSum);

    printf("Odd numbers: ");
    for (int i = 0; i < oddIndex; i++) {
        printf("%d ", oddNumbers[i]);
    }
    printf("\nOdd sum: %d\n", oddSum);

    return 0;
}
