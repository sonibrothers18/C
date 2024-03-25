#include<stdio.h>

void goodMoring();
void goodAfternoon();
void goodNight();

int main(){

    goodMoring();
    
    return 0;
}

void goodMoring(){
    printf("Good Morning Mayur\n");
    goodAfternoon();
}

void goodAfternoon(){
    printf("Good Evening Mayur\n");
    goodNight();
}

void goodNight(){
    printf("Good Night Mayur\n");
}