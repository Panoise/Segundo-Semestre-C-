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

Fraction multFraction(Fraction um, Fraction dois){
    int a,b;
    a = um.denominador * dois.denominador;
    b = um.numerador * dois.numerador;

    Fraction seila;
    seila.denominador = a;
    seila.numerador = b;
    return seila; 
}

int main(){

Fraction a;
a.numerador = 4;
a.denominador = 5;

Fraction b;

b.numerador = 5;
b.denominador = 2;


Fraction chama = multFraction(a,b); 

printf("A fração é: \n%d _ \n%d\n", chama.numerador, chama.denominador);
    return 0; 
}


