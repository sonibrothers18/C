#include<stdio.h>

int main(){
    
    int n=4;
    int prime=1;

    for(int i=2; i<n; i++){
        if(n%i==0){
            prime=0;
            break;
        }
    }

    if(prime==0){
        printf("Number is not prime\n");
    }
    else{
        printf("Number is prime\n");
    }
    
    return 0;
}