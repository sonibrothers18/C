//  10.50 -->
#include<stdio.h>
#include<string.h>

int main(){
    
    char st1[45] = "Hello";
    char *st2 = "Mayur";
    int val = strcmp(st1, st2);

    printf("Now the val is %d\n", val);

    return 0;
}