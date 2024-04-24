#include <stdio.h>
typedef struct Triangulo {
        int a;
        int b;
        int c;
    } Triangulo;
Triangulo setTria(int a, int b, int c){
   
   Triangulo triangulo;
    triangulo.a = a;
    triangulo.b = b;
    triangulo.c = c;
    return triangulo;
}
int isTriangle(Triangulo t){
    if(t.a + t.b > t.c && t.b + t.c > t.a && t.a + t.c > t.b )
        return 1;
    
    return 0;

}

int main(){

int a, b, c;

printf("Digite um número: \n");
scanf("%d", &a);
printf("Digite um número: \n");
scanf("%d", &b);
printf("Digite um número: \n");
scanf("%d", &c);

Triangulo tresangulo = setTria(a, b, c);

printf("Os números inseridos foram: %d %d %d\n", tresangulo.a, tresangulo.b, tresangulo.c);

printf("É um triangulo?:\n %s", isTriangle(tresangulo)?"Sim":"Não");


return 0;

}