#include <stdio.h>
#include <stdlib.h>
//Seja Bem vindo (a)!!\n\n essa calculadora tem um intuido de calcular a area de um Triangulo
int main(){
    printf("\n Seja Bem vindo (a)!!\n\n Essa calculadora tem um intuito\n de calcular a area de um Triangulo \n\n");
    printf("####################\n");
    printf("#    FORMULA       #\n");
    printf("#                  #\n");
    printf("#     B * H        #\n");
    printf("#    --------      #\n");
    printf("#       2          #\n");
    printf("#                  #\n");
    printf("####################\n\n");
    printf("O Primeiro valor e de B\n");
    printf("O Segundo valor e de H \n\n");
    int number_b, number_h, total;

    scanf("%i%i", &number_b, &number_h);

    total = number_b - number_h;

    
    printf("O Valor da area de um triangulo e: %i\n", total);

    return 0;
}


//TIPOS DE DADOS EM C
int b;// Inteiro
long int a; //Inteiro ( so que maiores )
float n; //Real 
double d; //Real ( so mais preciso )]
char x; // Caractere ( strings )
  