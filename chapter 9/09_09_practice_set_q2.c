#include<stdio.h>
#include<string.h>

struct vector{
    int x;
    int y;
};

struct vector sumVector(struct vector a1, struct vector a2){
    struct vector result;
    result.x = a1.x + a2.x;
    result.y = a1.y + a2.y;
    return result;
}

int main(){
    
    struct vector v1, v2, sum;

    v1.x = 5;
    v1.y = 4;
    printf("X dimension is %d and Y dimension is %d\n", v1.x, v1.y);
    
    v2.x = 8;
    v2.y = 6;
    printf("X dimension is %d and Y dimension is %d\n", v2.x, v2.y);
    
    sum = sumVector(v1,v2);
    printf("X dimension sum is %d and Y dimension is %d\n", sum.x, sum.y);
    
    return 0;
}