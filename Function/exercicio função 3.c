#include <stdio.h>

float conversor(char x, float escolhido){
    if (x == 'C'){
        return 5 * (escolhido-32) / 9;
    }else 
        return (9 * escolhido / 5) + 32;
}

int main(){

float convertido;
float escolhido;
char borabill;
printf("Digite qual a temperatura (C ou F): \n");
scanf("%c", &borabill);
printf("Digite quantos graus deseja converter: \n");
scanf("%f", &escolhido);
convertido = conversor(borabill, escolhido);
if (borabill == 'C'){
    printf("A temperatura convertida em Celsius é de: %f°", convertido);
}else 
    printf("A temperatura convertida em Fahrenheit é de: %f°", convertido);

    return 0; 
}