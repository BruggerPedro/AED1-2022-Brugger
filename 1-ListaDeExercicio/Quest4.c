#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    float massa, altura, imc;
    
    printf("--------- IMC ---------\n\n");
    printf("Insira o peso(kg): ");
    scanf("%f", &massa);
    printf("\nInsira a altura(m): ");
    scanf("%f", &altura);
    
    imc = (massa/pow(altura,2));
    
    printf("\n\n----- RESULTADO -----\n");
    printf("\nO IMC eh de: %f \n", imc);
    
    if(imc<18.5) {
        printf("\nClassificacao: Magreza");
    }
    if(imc>=18.5 && imc <24.9) {
        printf("\nClassificacao: Saudavel");
    }
    if(imc>=25 && imc <29.9) {
        printf("\nClassificacao: Sobrepeso");
    }
    if(imc>=30 && imc <34.9) {
        printf("\nClassificacao: Obesidade Grau I");
    }
    if(imc>=35 && imc <39.9) {
        printf("\nClassificacao: Obesidade Grau II(severa)");
    }
    if(imc>=40) {
        printf("\nClassificacao: Obesidade Grau III(morbida)");
    }
    
    return 0;
}
