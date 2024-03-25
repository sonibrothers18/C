#include<stdio.h>

int main(){
    
    float a;
    float b;

    printf("Enter the value of a\n");
    scanf("%f", &a);

    printf("Enter the value of b\n");
    scanf("%f", &b);

    if(a<b){
        printf("%f is the smallest number", a);
    }
    else{
        printf("%f is the smallest number", b);
    }

    return 0;
}