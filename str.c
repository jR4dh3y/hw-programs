#include <stdio.h>
void main(){
    char str[100];
    printf("Enter 1st string: ");
    scanf("%s", str);
    printf("1st string: %s\n", str);
    
    printf("Enter 2nd string: ");
    gets(str);
    printf("2nd string: %s\n", str);

    printf("Enter 3rd string: ");
    scanf("%[^\n]s", str);
    printf("3rd string: %s\n", str);
}