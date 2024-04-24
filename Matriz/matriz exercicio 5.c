#include <stdio.h>

typedef struct data{
    int dia;
    int mes;
    int ano;
} Data; 


int extraidia(Data data){
    return data.dia;
}

int main(){

Data data1;
data1.dia = 19;


int x = extraidia(data1);
printf("%d", x);



       
 
    return 0; 
}


