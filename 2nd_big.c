#include<stdio.h>
void main(){
    int a[]={100,95,31,2,10,55,6,42,89,80};
    int i, big, sbig;
    big = sbig = -9999;
    for (i = 0; i < 10; i++)
    {
        if (a[i] > big)
        {
            sbig = big;
            big = a[i];
        }
        else if (a[i] > sbig)
        {
            sbig = a[i];
        }
    }
    printf("Second biggest number is %d", sbig);
}