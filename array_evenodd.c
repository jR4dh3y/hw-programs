#include<stdio.h>
void main(){
    int n;
    printf("enter size of array: ");
    scanf("%d",&n);
    int arr[n],i,sum_even=0,sum_odd=0;
    printf("enter elements of array: ");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
        if(arr[i]%2==0)
            sum_even+=arr[i];
        else
            sum_odd+=arr[i];
    }
    printf("sum of even elements of array: %d",sum_even);
    printf("sum of odd elements of array: %d",sum_odd);
    
}