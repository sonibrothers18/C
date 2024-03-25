#include<stdio.h>
#include<stdlib.h>

int main(){
    
    int *ptr;
    // size of operator in c -->
    // printf("The size of int on my pc is %d\n", sizeof(int));
    // printf("The size of float on my pc is %d\n", sizeof(float));
    // printf("The size of char on my pc is %d\n", sizeof(char));

    ptr = (int *) malloc(6 * sizeof(int));  //--> space for 6 integers

    for(int i=0; i<6; i++){
        printf("Enter the value %d element\n", i+1);
        scanf("%d", &ptr[i]);
    }

    for(int i=0; i<6; i++){
        printf("The value if %d element is %d\n", i+1, ptr[i]);
        }

    return 0;
}