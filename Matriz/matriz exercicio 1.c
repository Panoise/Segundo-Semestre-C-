#include <stdio.h>


int main(){
    int row, col, ROW = 4, COL = 4;
    int matriz[ROW][COL];
    int maior = matriz[0][0];
    for (row = 0; row < ROW; row++){
        for(col = 0; col < COL; col++){
            printf("Digite um número para adicionar na matriz:  \n");
                scanf("%d", &matriz[row][col]);
            if (row == 0 && col == 0){
                maior = matriz[row][col];
            }else if (matriz[row][col] > maior){
                maior = matriz[row][col];
            }
        }
    }
    printf("O maior número foi: %d\n", maior);
    printf("\tMatriz\n\n");
    for (row = 0; row < ROW; row++){
        for(col = 0; col < COL; col++){
            printf("%d\t", matriz[row][col]);
        }    
        printf("\n");
    }


        return 0; 
}


