#include <stdio.h>

main(){
    float altura, massa, imc;
    
    scanf("%f%f", &altura, &massa);
    imc = massa /(altura * altura);
    printf("o valor e \n %f\n", imc);
    return 0;
}