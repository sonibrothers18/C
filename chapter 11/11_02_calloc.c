#include<stdio.h>
#include<stdlib.h>

int main(){
    
    int *ptr;
    ptr = (int *) calloc(6, sizeof(int));

    // for(int i=0; i<6; i++){
    //     printf("Enter the value %d element\n", i+1);
    //     scanf("%d", &ptr[i]);
    // }

    for(int i=0; i<6; i++){
        printf("The value if %d element is %d\n", i+1, ptr[i]);
        }

    return 0;
}