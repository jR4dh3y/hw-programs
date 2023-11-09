#include <stdio.h>
#include <math.h>

int amst(int input) {
    int originalNum, remainder, n = 0;
    float result = 0.0;
    
    originalNum = input;

    for (originalNum = input; originalNum != 0; ++n) {
        originalNum /= 10;
    }
    originalNum = input;

    while (originalNum != 0) {
        remainder = originalNum % 10;
        result += pow(remainder, n);
        originalNum /= 10;
    }

    return ((int)result == input);
}

int main() {
    int input, i;
    scanf("%d", &input);
    printf("Armstrong numbers up to %d are: ", input);
    for (i = 100; i <= input; i++) {
        if (amst(i)) {
            printf("%d ", i);
        }
    }

    return 0;
}