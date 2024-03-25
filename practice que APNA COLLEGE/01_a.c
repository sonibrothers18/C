#include<stdio.h>

int main(){

    float a;
    float b;

    printf("Enter the side a\n");
    scanf("%f", &a);

    printf("Enter the side b\n");
    scanf("%f", &b);

    printf("The perimeter of rectangle is %f", 2*(a+b));
    
    return 0;
}