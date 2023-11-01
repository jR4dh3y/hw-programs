#include<stdio.h>
void main(){
    int i = 1,c=0 ;
    for(i;i<101;i++){
        if (i%2!=0 && i%3!=0 && i%5!=0){        
            c = c + 1;
            //printf("%d, ", i);
    }
    }
    printf("%d", c);
}