#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int bit1, bit2, bit3, bit4, inteiro;
    
    printf("--------- CONVERSOR DE BINARIO ---------\n\n");
    printf("Digite o 1o.bit: ");
    scanf("%d", &bit1);
    printf("\nDigite o 2o.bit: ");
    scanf("%d", &bit2);
    printf("\nDigite o 3o.bit: ");
    scanf("%d", &bit3);
    printf("\nDigite o 4o.bit: ");
    scanf("%d", &bit4);
    
    inteiro = ((pow(2,3)*bit1)+(pow(2,2)*bit2)+(pow(2,1)*bit3)+(pow(2,0)*bit4));
    
    printf("\nO número binario %d%d%d%d corresponde ao numero decimal %d", bit1, bit2, bit3, bit4, inteiro);
    
    
    return 0;
}
