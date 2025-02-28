#include<stdio.h>
#include<string.h>

typedef struct employee{
    int code;
    float salary;
    char name[10];
} emp;

void show(emp emp1){
    printf("The Code of employee is %d\n", emp1.code);
    printf("The Salary of employee is %f\n", emp1.salary);
    printf("The Name of employee is %s\n", emp1.name);
}

int main(){
    
    // Declaring e1 and ptr
    emp e1;
    emp *ptr;

    // Pointing ptr to e1
    ptr = &e1;

    // Set the number values for e1
    ptr->code = 101;
    ptr->salary = 11.01;
    strcpy(ptr->name, "harry");

    show(e1);

    return 0;
}