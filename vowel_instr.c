#include<stdio.h>
#include<string.h>
void main(){
    char a[100];
    printf("Enter 1st String - ");
    scanf("%[^\n]s", a);
    int l=strlen(a);
    int vow=0,con=0;
    for(int i=0;i<l;i++){
        if (a[i] == 'a' || a[i] == 'e' || a[i] == 'i' || a[i] == 'o' || a[i] == 'u' || a[i] == 'A' || a[i] == 'E' || a[i] == 'I' || a[i] == 'O' || a[i] == 'U'){
            vow++;
            }
        else{
            con++;
            }
    }
    printf("Vowels: %d\nConsonants: %d\n",vow,con);
}