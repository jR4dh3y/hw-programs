#include<stdio.h>
int main(){
    int n;
    printf("Enter the limit ");
    scanf("%d",&n);
    int a[n];
    
    printf("Enter the elements ");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    
    int ele = a[0], pos;
    for (int i = 0; i < n; i++) {
        if (a[i] > ele) {
            pos = i;
            ele = a[i];
        }
    }
    printf("The greatest  element is %d \n",ele); 
    
    for (int i = pos; i < n - 1; i++) {
        a[i] = a[i + 1];
    }
    n--;
    int ele2 = a[0];
    for (int i = 0; i < n; i++) {
        if (a[i] > ele2) {
            ele2 = a[i];
        }
    }
    printf("The 2nd greatest  element is %d ",ele2); 
    return 0;
}



