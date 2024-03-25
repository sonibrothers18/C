#include<stdio.h>

int addition(int a);

int main(){
    
    int num;

    printf("Enter any integer\n");
    scanf("%d", &num);

    printf("Sum of integers is %d\n", addition(num));

    return 0;
}

int addition(int a){
    if(a!=0){
        return a + addition(a-1);
    }
    else{
        return 0;
    }
}