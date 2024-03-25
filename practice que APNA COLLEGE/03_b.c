#include<stdio.h>

int main(){
    
    float a;

    printf("Enter your number\n");
    scanf("%f", &a);

    if(a>0){
        printf("%f is a natural number", a);
    }

    else{
        printf("%f is not a natural number", a);
    }

    return 0;
}