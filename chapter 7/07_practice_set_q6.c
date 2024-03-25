#include<stdio.h>

int integer(int *a, int b){
    int positive=0;
    int c;
    for(int i=0;i<b;i++){
        c=a[i];
        if(c>0){
            positive += 1;
        }
    }
    printf("There are %d positive number in array\n", positive);
}
int main(){
    
    int arr[]={-15,-57,458,-15,-23};
    integer(arr,5);
    
    return 0;
}