#include <stdio.h>
int maior, menor, i; 
int v[5] = {1,2,3,4,5};
void vetor(int v[], int t){
    maior = v[0]; 
    menor = v[0];
    for (i=0; i < t; i++){
        if (v[i] > maior){
            maior = v[i];
        }else if (v[i] < menor){
            menor = v[i];
        }
    }
}

int main(){
int v[5] = {239,1,34,3000,99};
vetor(v,5);

printf("%d,%d", maior, menor);

    return 0; 
}