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
    char b[len];
    for (i = 0; i < len; i++){
        b[i] = str[i];
    }
    printf("the copied string is %c\n", b);
    int flag=0;
    for (i=0; i<len; i++){
        int m= str[i];
        int n= b[i];
        if (m!=n){
            flag=1;
            break;
        }
        if (flag==1){
            printf("The strings are not equal\n");
        }
        else{
            printf("The strings are equal\n");
        }
    }
}