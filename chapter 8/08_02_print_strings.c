#include<stdio.h>

int main(){
    
    char str[] = "Mayur";
    char *ptr = str;

    while(*ptr!='\0'){
        printf("%c", *ptr);
        ptr++;
    }

    return 0;
}