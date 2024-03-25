#include<stdio.h>

int main(){
    
    int num1;
    int num2;
    int num3;
    int num4;

    printf("Enter your 1st number\n");
    scanf("%d", &num1);

    printf("Enter your 2st number\n");
    scanf("%d", &num2);

    printf("Enter your 3st number\n");
    scanf("%d", &num3);

    printf("Enter your 4st number\n");
    scanf("%d", &num4);

    if(num1>num2 && num1>num3 && num1>num4){
        printf("The greatest number is %d\n", num1);
    }

    else if(num2>num3 && num2>num4 && num2>num1){
        printf("The greatest number is %d\n", num2);
    }

    else if(num3>num4 && num3>num1 && num3>num2){
        printf("The greatest number is %d\n", num3);
    }

    else if(num4>num1 && num4>num2 && num4>num3){
        printf("The greatest number is %d\n", num4);
        }
    
    return 0;
}


//                    #include<stdio.h>

//                    int main(){

//                        int a;
//                        int b;
//                        int c;
//                        int d;

//                        printf("enter number\n");
//                        scanf("%d %d %d %d", &a, &b, &c, &d);
                       
//                        if(a>b) 
//                        { 
//                            if(a>c) 
//                            { 
//                                if(a>d) 
//                                {   
//                                    printf("%d is big",a); 
//                                } 
//                                else 
//                                { 
//                                    printf("%d is big",d); 
//                                } 
//                            } 
//                        } 
//                        else if(b>c) 
//                            { 
//                                if(b>d) 
//                                    { 
//                                        printf("%d is big",b); 
//                                    } 
//                                else 
//                                    { 
//                                        printf("%d is big",d); 
//                                    } 
//                            } 
//                            else if(c>d) 
//                                { 
//                                   printf("%d is big",c); 
//                                } 
//                            else 
//                            { 
//                                printf("%d is big",d); 
//                            } 
//                        return 0;
//                    }
