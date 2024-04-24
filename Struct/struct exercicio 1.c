#include <stdio.h>

typedef struct data{
    int dia;
    int mes;
    int ano;
} Data; 


int comparaDatas(Data data1 , Data data2){
    if (data1.dia > data2.dia)
        return -1;
    if(data1.dia < data2.dia)
        return 0;
}

int main(){
int b, a;

    printf("Digite um número:  \n");
        scanf("%d", &b);
    printf("Digite um número:  \n");
        scanf("%d", &a);

Data data1;
data1.dia = b;
Data data2;
data2.dia = a;

int x = comparaDatas(data1, data2);
printf("%d", x);

    return 0; 
}


