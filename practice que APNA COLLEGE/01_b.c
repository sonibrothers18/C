#include<stdio.h>
#include<math.h>

int main(){
    
    float n;

    printf("Enter the value of n\n");
    scanf("%f", &n);

    printf("The cube of your number is %f", pow(n, 3));

    return 0;
}