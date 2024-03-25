#include<stdio.h>

int main(){
    
int sum=0;
int i;
int a=8;

for(i=1; i<=10; i++){
    sum += a*i;
}
    printf("The sum is %d\n", sum); 

    return 0;
}