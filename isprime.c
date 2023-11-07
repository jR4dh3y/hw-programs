#include <stdio.h>

int main() {
    int num, i, f = 0;
    printf("Enter a positive integer: ");
    scanf("%d", &num);

    // 0 and 1 are not prime numbers
    if (num == 0 || num == 1) {
        printf("%d is not a prime number.", num);
    } else {
        for (i = 2; i <= num/2; ++i) {
            if (num % i == 0) {
                f = 1;
                break;
            }
        }

        if (f == 0) {
            printf("%d is a prime number.", num);
        } else {
            printf("%d is not a prime number.", num);
        }
    }

    return 0;
}
