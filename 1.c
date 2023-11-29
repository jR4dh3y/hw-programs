#include <stdio.h>
void main(){
    int i = 0;
    while(i<5){
        do
        {
            i++;
            if(i==3)
                break;
            printf("%d",i);

        } while (i<=5);
        
    }
}