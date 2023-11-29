#include<stdio.h>
int main(){
    int n;
    printf("Enter the limit ");
    scanf("%d",&n);
    int a[n];

    printf("Enter the elements ");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int ele,flag=0,pos;
    printf("Enter the element to search ");
    scanf("%d",&ele);
    for(int i=0;i<n;i++){
        if(a[i]==ele){
            flag=1;
            pos=i+1;
            break;
        }
    }
    if(flag==1){
        printf("Element found at position %d",pos);
    }
    else{
        printf("Element not found");
    }
    return 0;
}