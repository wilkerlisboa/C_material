#include<stdio.h>

int main(){
    float distancia, consumo_total, calculo;
    scanf("%f%f", &distancia, &consumo_total);
    calculo = distancia / consumo_total;
    printf("O consumo medio de um alto movel e : %.2f km/l\n", calculo);
    return 0; 
}