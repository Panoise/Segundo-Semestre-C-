#include <stdio.h>

int main (){

int caneta_azul, i, n=0; 
int vector[5]; 

for (i=0; n < 5; i++){
    
    printf("Digite um número para o vetor:  \n");
    scanf("%d", &caneta_azul);
    vector[n] = caneta_azul;
    n++;
}
for (i=0; i < 5; i++){
   printf("\n\n%d", vector[i]);
}

    return 0; 
}