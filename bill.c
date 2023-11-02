//write a program at calculate the energy bill.
//starting and ending meter readings and charges are as follows

//no of units       charges
//200-500           3.50
//100-200           2.50
//less than 100     1.50

// starting - 800
// final    - 850

#include <stdio.h>
int main(){
    int start,end,units;
    float charges;
    printf("Enter the starting meter reading: ");
    scanf("%d",&start); 
    printf("Enter the ending meter reading: ");
    scanf("%d",&end);
    units = end - start;
    if(units <= 100){
        charges = units * 1.50;
    }
    else if(units > 100 && units <= 200){
        charges = units * 2.50;
    }
    else if(units > 200 && units <= 500){
        charges = units * 3.50;
    }
    printf("Total charges: %.2f",charges);
}