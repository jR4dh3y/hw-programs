#include<stdio.h>
int main(){
    int arr[] = {2,2,2,5,5},count=0;
    int x;
    for(int i=0;i<5;i++){
        for(int j=i+1;j<5;j++){
            if(arr[i]==arr[j]){
                count=count + 1;
                //break;
            }
        if(count==1){
            x=arr[i];
            break;
        }
    }
    printf("%d",x);
    return 0;
}
}