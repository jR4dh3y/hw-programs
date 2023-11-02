//write a program to check the smallest among given 5 numbers
#include <stdio.h>
int main(){
    int a,b,c,d,e;
    printf("Enter the 5 numbers: ");
    scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
    if(a<b && a<c && a<d && a<e){
        printf("%d is the smallest number",a);
    }
    else if(b<a && b<c && b<d && b<e){
        printf("%d is the smallest number",b);
    }
    else if(c<a && c<b && c<d && c<e){
        printf("%d is the smallest number",c);
    }
    else if(d<a && d<b && d<c && d<e){
        printf("%d is the smallest number",d);
    }
    else{
        printf("%d is the smallest number",e);
    }
}