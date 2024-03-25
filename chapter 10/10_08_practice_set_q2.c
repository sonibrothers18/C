#include<stdio.h>

int main(){
    
    FILE *ptr;
    int num;

    printf("Which table you want?\n");
    scanf("%d", &num);

    ptr = fopen("q2.txt", "w");
    for(int i=0; i<10; i++){
        fprintf(ptr, "%dx%d=%d\n", num, i+1, num*(i+1));
    }
fclose(ptr);

    return 0;
}