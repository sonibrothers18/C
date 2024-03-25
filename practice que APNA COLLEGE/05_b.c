#include<stdio.h>
#include<math.h>

float root(float num){
    float result=pow(num, 0.5);
    return result;
}

int main(){

    float a;

    printf("Enter your number\n");
    scanf("%f", &a);

    printf("Square root of %f is %.2f\n", a, root(a));
    
    return 0;
}