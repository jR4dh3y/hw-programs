#include<stdio.h>
void main(){
    int f=0, s=1, i;
    for (i=0; i<=10; i++ ){
        printf("%d, ", f);
        int t = f+s;
        f = s;
        s = t;
    }
}