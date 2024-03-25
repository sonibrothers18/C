#include<stdio.h>

float temp(float a){
    if(a<=8){
        printf("It is cold.");
    }

    else{
        printf("It is hot.");
    }
}

int main(){
    
    float b;

    printf("Enter temperature in celcius\n");
    scanf("%f", &b);

    printf("It is %f", temp(b));

    return 0;
}