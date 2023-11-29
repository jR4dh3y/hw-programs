#include <stdio.h>

int main() {
    int originalArray[] = {1, 2, 3, 4, 2, 5, 6, 3, 7, 8, 4, 9, 10, 5};
    int originalSize = sizeof(originalArray) / sizeof(originalArray[0]);

    int newArray[originalSize];
    int newSize = 0;

    for (int i = 0; i < originalSize; i++) {
        int isDuplicate = 0;

        for (int j = 0; j < newSize; j++) {
            if (originalArray[i] == newArray[j]) {
                isDuplicate = 1;
                break;
            }
        }

        if (!isDuplicate) {
            newArray[newSize] = originalArray[i];
            newSize++;
        }
    }

    printf("Original Array: ");
    for (int i = 0; i < originalSize; i++) {
        printf("%d ", originalArray[i]);
    }

    printf("\nNew Array (Duplicates Removed): ");
    for (int i = 0; i < newSize; i++) {
        printf("%d ", newArray[i]);
    }

    return 0;
}
