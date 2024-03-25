#include<stdio.h>

int main(){
    
    float a;
    float b;
    float c;

    printf("Enter the value of a\n");
    scanf("%f", &a);

    printf("Enter the value of b\n");
    scanf("%f", &b);

    printf("Enter the value of c\n");
    scanf("%f", &c);

    printf("The average is %f", (a+b+c)/3);
    return 0;
}