#include<stdio.h>
#include<string.h>

struct vector{
    int x;
    int y;
};

int main(){
    
    struct vector v1, v2;

    v1.x = 34;
    v1.y = 54;
    printf("X dimension is %d and Y dimension is %d\n", v1.x, v1.y);
    
    v2.x = 354;
    v2.y = 534;
    printf("X dimension is %d and Y dimension is %d\n", v2.x, v2.y);
    

    return 0;
}