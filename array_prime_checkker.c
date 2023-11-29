#include<stdio.h>
int isPrime(int num) {
    if (num <= 1) {
        return 0;
    }
    for (int i = 2; i <= num / 2; i++) {
        if (num % i == 0) {
            return 0;
        }
    }
    return 1;
}

int main() {
    int n;
    printf("enter size of array: ");
    scanf("%d", &n);
    int arr[n], i,sum_prime = 0, sum_non_prime = 0;
    printf("enter elements of array: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        if (isPrime(arr[i])) {
            sum_prime += arr[i];
        } else {
            sum_non_prime += arr[i];
        }
    }
    printf("sum of prime elements of array: %d\n", sum_prime);
    printf("sum of non-prime elements of array: %d\n", sum_non_prime);
    return 0;
}
