#include<stdio.h>

float sum(float a, float b){
    float result=a+b;
    return result;
}

int main(){

    float x=5;
    float y=1;

    printf("Sum is %f", sum(x,y));

    return 0;
}