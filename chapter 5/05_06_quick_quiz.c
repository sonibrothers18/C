#include<stdio.h>
#include<math.h>  // for 'pow' we use this

int main(){
    
    int side;

    printf("Enter the value of side\n");
    scanf("%d", &side);

    printf("The value of area is %f", pow(side,2));   // in 'pow' we use '%f'
                                                     // 'pow' is a library function
    return 0;
}