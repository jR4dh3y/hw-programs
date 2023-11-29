#include<stdio.h>
int main(){
    int m,n,i,j;
    printf("limits");
    scanf("%d%d",&m,&n);
    int a[m][n],b[m][n],c[m][n];
    printf("elements of first matrix");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
        scanf("%d",&a[i][j]);
        }
    }
    printf("elements of second matrix");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
        scanf("%d",&b[i][j]);
        }
    }
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            c[i][j]=a[i][j]+b[i][j];
        }
    }
    printf("The sum is\n");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            printf("%d\t",c[i][j]);
        }
        printf("\n");
    }
    return 0;
}