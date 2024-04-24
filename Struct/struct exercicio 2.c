#include <stdio.h>

typedef struct Fraction{
    
    int numerador;
    int denominador;
    
} Fraction; 

Fraction setFraction(int x, int y){
    Fraction xis;
    xis.numerador = x;
    xis.denominador = y;  
    return xis;
}

int main(){
int a = 1; int b = 4;
Fraction chama = setFraction(a,b); 

printf("\n%d, %d\n", chama.numerador, chama.denominador);
    return 0; 
}


