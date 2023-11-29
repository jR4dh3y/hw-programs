#include<stdio.h>
void main(){
    int n1,m1,n2,m2;
    printf("Enter the limits of A matrix");
    scanf("%d%d",&m1,&n1);
    printf("Enter the limits of B matrix");
    scanf("%d%d",&m2,&n2);
    if(m1==m2 && n1==n2){
        int a[m1][n1],b[m2][n2],c[m1][n1];
        printf("Enter the elements of A matrix");
        for(int i=0;i<m1;i++){
            for(int j=0;j<n1;j++){
                scanf("%d",&a[i][j]);
            }
        }
        printf("Enter the elements of B matrix");
        for(int i=0;i<m2;i++){
            for(int j=0;j<n2;j++){
                scanf("%d",&b[i][j]);
            }
        }
         for (i = 0; i < n; i++) {
             for (j = 0; j < n; j++) {
                 c[i][j] = 0;
                 for (k = 0; k < n; k++) {
                     c[i][j] += a[i][k] * b[k][j];
                 }
             }
         }

        printf("The product of the two matrices is: \n");
            for (i = 0; i < n; i++) {
                for (j = 0; j < n; j++) {
                    printf("%d\t", c[i][j]);
                }
                printf("\n");
            }
    }
    else{
        printf("The matrices cannot be multiplied");
    }
    return 0;
}