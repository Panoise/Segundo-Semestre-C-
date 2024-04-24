#include <stdio.h>

//int calculaDeterminante(int M[2][2]);

int main(){
    int matriz[2][2], det, i, j;
    for (i=0; i<2; i++){
        for(j=0; j<2; j++){
            scanf("%d", &matriz[i][j]);
        }

    }
    det = calculaDeterminante(matriz);
    printf("O determinante da matriz é: %d \n", det);

    return 0;

}

int calculaDeterminante(int M[2][2]){
//               l C
    int diaP = M[0][0] * M[1][1];
    int diaS = M[0][1] * M[1][0];
    return diaP - diaS;

}

