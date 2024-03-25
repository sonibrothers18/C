// #include<stdio.h>
// // fgetc demo for reading a file

// int main(){
    
//     FILE *ptr;
//     ptr = fopen("getcdemo.txt", "r");
//     // char c = fgetc(ptr);     //--> for one character only

//     printf("The value of my character is %c\n", fgetc(ptr));
//     printf("The value of my character is %c\n", fgetc(ptr));
//     printf("The value of my character is %c\n", fgetc(ptr));
//     printf("The value of my character is %c\n", fgetc(ptr));
//     printf("The value of my character is %c\n", fgetc(ptr));

//     return 0;
// }

// -------------------------------------------------------------------------------------------------------------------------------//

#include<stdio.h>
// fputc demo for writing a file

int main(){
    
    FILE *ptr;
    ptr = fopen("putcdemo.txt", "w");
    putc('m',ptr);
    putc('a',ptr);
    putc('y',ptr);
    putc('u',ptr);
    putc('r',ptr);
    
    fclose(ptr);

    return 0;
}