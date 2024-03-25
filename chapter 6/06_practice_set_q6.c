// QUESTION 6-->
// NOT UNDERSTAND-->
#include<stdio.h>

int multiply(int x);

int main(){
    
    int a = 5;
    
    printf("Value after multiply is %d\n", multiply(a));

    return 0;
}

int multiply(int x){
    int result = x*10;
    return result;
}