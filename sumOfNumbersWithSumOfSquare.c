//calc the sum of first 5 number and sum of there squares
#include <stdio.h>
int main()
{
    int i, sum = 0, sum1 = 0;
    for (i = 1; i <= 5; i++)
    {
        sum = sum + i;
        sum1 = sum1 + (i * i);
    }
    printf("sum of first 5 number: %d\n", sum);
    printf("sum of squares of first 5 number: %d\n", sum1);
    return 0;
}

