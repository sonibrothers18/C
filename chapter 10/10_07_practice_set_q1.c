#include<stdio.h>

int main(){

    int a;
    int b;
    int c;
    
    FILE  *ptr;
    ptr = fopen("q1.txt", "r");
    fscanf(ptr, "%d %d %d", &a, &b, &c); 

    printf("The values of a b and c is %d %d %d\n", a, b, c);

    return 0;
}