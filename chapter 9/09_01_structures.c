#include<stdio.h>
#include<string.h>

struct employee{
    int code;
    float salary;
    char name[10];
};

int main(){

    struct employee e1;
    e1.code = 100;
    e1.salary = 34.454;
    strcpy(e1.name, "Mayur");
    // e1.name = "Mayur"; --> wont work

    printf("%d\n", e1.code);
    printf("%.3f\n", e1.salary);
    printf("%s\n", e1.name);

    return 0;
}