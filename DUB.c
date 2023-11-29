#include<stdio.h>
int main(){
    int i, j;
    int n=8;
    int a[8]={1,2,3,4,2,5,6,3};
    int b[8]={0};
    
    printf("the duplicate elements are: ");
    for(i=0;i,n;i++){
        int flag=0;
        if(b[i]==0){
            for(j=i+1;j<n;j++){
                if(a[i]==a[j]){
                    flag=1;
                    b[j]=1;
                }
            }
            if(flag==1){
                printf("%d,",a[i]);
            }    
        }  
    }
}