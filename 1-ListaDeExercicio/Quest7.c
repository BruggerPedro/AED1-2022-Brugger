#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int num1,num2,num3,num4,num5;
    float media,desvio_padrao;
    
    printf("----- DADOS -----\n\n");
    printf("Digite os numeros que deseja fazer a media e o desvio padrao: \n\n");
    printf("1o. Numero: ");
    scanf("%d", &num1);
    printf("\n2o. Numero: ");
    scanf("%d", &num2);
    printf("\n3o. Numero: ");
    scanf("%d", &num3);
    printf("\n4o. Numero: ");
    scanf("%d", &num4);
    printf("\n5o. Numero: ");
    scanf("%d", &num5);
    
    media = (num1 + num2 + num3 + num4 + num5)/5;
    
    desvio_padrao = sqrt((pow(num1 - media,2) + pow(num3 - media,2) + pow(num4 - media,2) + pow(num5 - media,2))/5);
    
    printf("\n\n----- RESULTADO -----\n\n");
    printf("Media: %f\n\n", media);
    printf("Desvio Padrao: %f", desvio_padrao);
    
    return 0;
}
