#include<stdio.h>

int main(){
    
    int num;

    printf("Enter your number \n");
    scanf("%d", &num);

    for(int n=1; n<=num; n++){
        printf("The value of your number is %d\n", n);
    }

    return 0;
}