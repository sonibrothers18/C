#include<stdio.h>

int main(){
    
    char a;

    printf("Enter your character\n");
    scanf("%c", &a);

    if(a>=48 && a<=57){
        printf("It is a digit");
    }
    else{
        printf("It is not a digit");
    }

    return 0;
}