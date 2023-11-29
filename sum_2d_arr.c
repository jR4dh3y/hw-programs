#include<stdio.h>
void main(){
    int m,n,i,j;
    printf("Enter the limits");
    scanf("%d%d",&m,&n);
    int a[m][n],sum=0;
    printf("Enter the elements");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            scanf("%d",&a[i][j]);
            sum=sum+a[i][j];
        }
    }
    printf("Sum of the elements is %d",sum);
}