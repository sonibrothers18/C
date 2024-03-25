#include<stdio.h>

int main(){
    
    int a;
    int mul[10];

    printf("Which table you want?\n");
    scanf("%d", &a);

    for(int i=0; i<10; i++){
        mul[i] = a*(i+1);
    }

    for(int i=0; i<10; i++){
        printf("%d x %d = %d\n", a, i+1, mul[i]);
    }

    return 0;
}