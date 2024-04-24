#include <stdio.h>

int receba(int a, int b){
    if (a>b){
        return a;
    }else if(b>a){
        return b;
    }else 
        return b;
}

int recebadnv(int x, int receba){
    if(x>receba){
        return x;
    }else 
        return receba;
}
int main(){

int a, b, x, recebaaa, receba_mais1vez;

scanf("%d", &a);
scanf("%d", &b);
recebaaa = receba(a, b);
scanf("%d", &x);
receba_mais1vez = recebadnv(x, recebaaa);
printf("O maior número digitado foi: %d", receba_mais1vez);
    return 0; 
}