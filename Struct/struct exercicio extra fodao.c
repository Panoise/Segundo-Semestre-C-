#include <stdio.h>

typedef struct BobEsponja{
    
    int matricula;
    char nome;
    float prova1;
    float prova2;
    float prova3;    
    float media; 

}BobEsponja; 



int main(){

BobEsponja seila[5];

int i; 
float Maiormediageral = 0, Menormediageral = Maiormediageral; 
char Melhoraluno, pioraluno;

for (i = 1; i <= 5; i++){
    
    printf("Digite a matricula do Aluno %d:  \n", i);
    scanf("%d", &seila[i].matricula);
    printf("Digite o nome do Aluno %d:  \n", i);
    scanf("%c", &seila[i].nome);
    printf("Digite a nota Aluno %c na prova um:  \n", seila[i].nome);
    scanf("%f", &seila[i].prova1);
    printf("Digite a nota Aluno %c na prova dois:  \n", seila[i].nome);
    scanf("%f", &seila[i].prova2);
    printf("Digite a nota Aluno %c na prova tres:  \n", seila[i].nome);
    scanf("%f", &seila[i].prova3);
    
    seila[i].media = (seila[i].prova3 + seila[i].prova2 + seila[i].prova1) / 3;
    
    if (seila[i].media > Maiormediageral || i == 1){
        Maiormediageral = seila[i].media;
        Melhoraluno = seila[i].nome;
    
    }if (seila[i].media < Menormediageral || i == 1){
        Menormediageral = seila[i].media;
        pioraluno = seila[i].nome;
    
    }if (seila[i].media >= 6){
        printf("O aluno %c foi aprovado!\n\n", seila[i].nome);
    
    }if (seila[i].media < 6){
        printf("O aluno %c foi reprovado!\n\n", seila[i].nome);
    
    }

}
printf("O aluno %c teve a maior média! Sua nota foi de: %f\n", Melhoraluno, Maiormediageral);
printf("O aluno %c teve a pior média! Sua nota foi de: %f\n", pioraluno, Menormediageral);


    return 0; 
}


