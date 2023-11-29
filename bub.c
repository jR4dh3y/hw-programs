#include<stdio.h>
void main(){
    int n;
    printf("enter the limit: ");
    scanf("%d",&n);
    int a[n],i;
    printf("enter the array elements- ");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("sorted array");
    for(i=0;i<n-1;i++){
        int k=0;
        for(int j=k+1; j<n-1;j++){
            if (a[k]<a[j]){
                int t = a[k];
                a[k] = a[j];
                a[j] = t;
            }
        }
    }
    for(i=0;i<n;i++){
        printf("%d\t",a[i]);
    }
}