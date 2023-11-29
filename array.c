#include<stdio.h>
void main(){
    int n;
    printf("enter size of array: ");
    scanf("%d",&n);
    int arr[n],i,sum=0;
    printf("enter elements of array: ");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
        sum+=arr[i];
    }
    printf("sum of elements of array: %d",sum);
    
}