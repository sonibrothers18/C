// #include<stdio.h>

// int main(){
    
//     char ptr[] = "Mayur";
//     ptr = "Shubham bhai";     //  --> This will not work

//     printf("%s", ptr);
    
//     return 0;
// }

#include<stdio.h>

int main(){
    
    char *ptr = "Mayur";
    ptr = "Shubham bhai";

    printf("%s", ptr);
    
    return 0;
}