#include<stdio.h>

int main(){
    
    int i;
    int n=3;
    int factorial=1;

    for(i=1; i<=n; i++){
        factorial *=i;
    }

    printf("Factorial of %d is %d\n", n, factorial);

    return 0;
}