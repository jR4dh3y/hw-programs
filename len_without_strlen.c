#include<stdio.h>
void main(){
    char str[100];
    printf("Enter a string: ");
    scanf("%[^\n]s", str);
    int i, len = 0;
    for (i = 0;; i++){
        if ( str[i] != '\0'){
        break;
        }
        else len++;
    }
    printf("Length of the string is %d\n", len);
}