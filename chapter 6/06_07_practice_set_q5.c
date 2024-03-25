// QUESTION 5-->
#include<stdio.h>

int main(){
    
    int i = 4;
    int *j = &i;
    int **k = &j;

    printf("The value of i is %d\n", **k);

    return 0;
}