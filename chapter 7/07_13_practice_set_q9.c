#include<stdio.h>

int main(){
    
    int arr[2][3][4];

    for(int i=0; i<2; i++){
        for(int j=0; j<3; j++){
            for(int k=0; k<4; k++){
                printf("The address of arr[%d][%d][%d] is %u\n", i, j, k, &arr[i][j][k]);
            }
        }
    }
    return 0;
}

// ------------------------------------------------------------------------------------

#include<stdio.h>

int main(){
       
       int num[3];
       for(int i=0;i<3;i++){
        printf("Enter %d dimension value: ",i+1);
        scanf("%d",&num[i]);
       }

       int b[num[0]][num[1]][num[2]];
       for(int i=0;i<num[0];i++){
        for(int j=0;j<num[1];j++){
            for(int k=0;k<num[2];k++){
                printf("Address of [%d][%d][%d] is %u\n",i,j,k,&b[i][j][k]);
            }
        }
       }       
       return 0;
}