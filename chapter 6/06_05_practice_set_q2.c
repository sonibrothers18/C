// QUESTION 2-->
// 8.08.25 --> explation
// IMPORTANT

#include<stdio.h>

void printAdd(int a);

int main(){

    int i=4;

    printf("The address of 'i' is %u\n", &i);
    printAdd(i);

    return 0;
}

void printAdd(int a){
    printf("The address of 'a' is %u\n", &a);
}