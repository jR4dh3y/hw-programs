#include <stdio.h>
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
    int flag =0,
    last = len - 1;
    int first = 0;
    while (last > first){
        if (str[first++] != str[last--]){
            flag = 1;
            break;
        }
    }
    if (flag == 1){
        printf("The string is not a palindrome\n");
    }
    else{
        printf("The string is a palindrome\n");
    }
}