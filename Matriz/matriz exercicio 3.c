#include <stdio.h>

//Faça um programa que preenche uma matriz 5 x 5 com o produto da posição da linha e da coluna de cada elemento. Em seguida, imprima.

int main(){
    int row, col, ROW = 5, COL = 5;
    int matriz[ROW][COL];
    
    for (row = 0; row < ROW; row++){
        for(col = 0; col < COL; col++){
            matriz[row][col] = row * col;
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


