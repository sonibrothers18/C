// QUESTION 5-->
#include<stdio.h>

int main(){
   
    char ch;

    printf("Enter the character\n");
    scanf("%c", &ch);

    if(ch>=97 && ch<=122){         // 97-122 = a-z  (ascii table)
        printf("It is lowercase");
    }

    else{
        printf("It is uppercase");
    }

    return 0;
}