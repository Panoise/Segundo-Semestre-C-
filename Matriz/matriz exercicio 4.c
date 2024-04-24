#include <stdio.h>

//Leia uma matriz 4 x 4 e imprima a triangular superior.

int main(){
    int row, col, ROW = 4, COL = 4;
    int matriz[ROW][COL];
    
    for (row = 0; row < ROW; row++){
        for(col = 0; col < COL; col++){
            matriz[row][col] = 0;
            if(row < col){
                matriz[row][col] = 1; 
            }
          }
        }
    
   
    printf("\tMatriz\n\n");
    for (row = 0; row < ROW; row++){
        for(col = 0; col < COL; col++){
            printf("%d\t", matriz[row][col]);
        }    
        printf("\n");
    }

        return 0; 
}


