#include<stdio.h>
#define PI = 3.14 

int main(){
    int n;
    printf("Enter the limit ");
    scanf("%d",&n);
    int a[n];

    printf("Enter the elements ");
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);

    int pos;
    printf("Enter the position to delete ");
    scanf("%d",&pos);
    for(int i=pos-1;i<n-1;i++)
        a[i]=a[i+1];

    printf("The elements after deletion ");
    for(int i=0;i<n-1;i++)
        printf("%d ",a[i]);

    return 0;
}

