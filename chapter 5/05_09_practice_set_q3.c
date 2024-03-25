#include<stdio.h>

float force(float m);

int main(){

    float mass;

    printf("Enter the mass\n");
    scanf("%f", &mass);

    printf("Force is %.2f", force(mass));    //  '%.2f' means 2 decimals place.
    
    return 0;
}

float force(float m){
    float result = m * 9.8;
    return result;
}