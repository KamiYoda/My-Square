#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void my_square(int row, int col){
    int i,j;
    for(i=1; i<=row;i++){
        for(j=1;j<=col;j++){
            if(i==1 && j==1){
            printf("o");
            }
            else if(i==row && j==col){
                printf("o");
            }
            else if(i==1 && j==col){
                printf("o");
            }
            else if(i==row && j==1){
                printf("o");
            }
            else if(i>1 &&(j==1)||(j==col)){
                printf("|");
            }
            else if (i == row && ((j > 1) || (j < col))) {
                printf("-");
            }
            else if (i == 1 && ((j > 1) || (j < col))) {
                printf("-");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
}

int main(int var, char* argv[]){
    int x,y = 0;
    if(argv[1] && argv[2]!= NULL){
        x = atoi(argv[1]);
        y = atoi(argv[2]);
    }
    my_square(x,y);
return 0;
}
