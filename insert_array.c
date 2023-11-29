#include<stdio.h>
int main(){
    int n;
    printf("Enter the limit");
    scanf("%d",&n);
    int a[n];
    
    printf("Enter the elements");
    for(int i=0;i<n-1;i++){
        scanf("%d",&a[i]);
    }
    
    int pos,ele;
    printf("Enter the position to insert");
    scanf("%d",&pos);
    printf("Enter the element to insert");
    scanf("%d",&ele);
    for(int i=n;i>=pos;i--){
        a[i-1]=a[i-2];
        a[pos-1]=ele;
    }
    
    printf("The elements after insert");
    for(int i=0;i<n;i++){
        printf("%d\n ",a[i]);
    }

    return 0;
}