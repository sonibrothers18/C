#include<stdio.h>

float convert(float c);

int main(){

    float celsius;

    printf("Write temp in celsius\n");
    scanf("%f", &celsius);

    printf("Temp in fahrenheit is %f\n", convert(celsius));    

    return 0;
}

float convert(float c){
    float result=(c*9/5)+32;
    return result;
}