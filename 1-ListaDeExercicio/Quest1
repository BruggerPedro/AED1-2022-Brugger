#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;
    float jogador1, jogador2, jogador3, jogador1_rec, jogador2_rec, jogador3_rec, valor_premio, total;
    
    printf("Digite os valores que cada jogador apostou: \n\n");
    printf("Jogador 1: ");
    scanf("%f", &jogador1);
    printf("\n");
    printf("Jogador 2: ");
    scanf("%f", &jogador2);
    printf("\n");
    printf("Jogador 3: ");
    scanf("%f", &jogador3);
    printf("\n\n");
    printf("Digite os valor do premio: ");
    scanf("%f", &valor_premio);
    
    total = jogador1 + jogador2 + jogador3;
    jogador1_rec = (valor_premio*jogador1)/total;
    jogador2_rec = (valor_premio*jogador2)/total;
    jogador3_rec = (valor_premio*jogador3)/total;
    
    printf("O valor que cada jogador recebeu foi: \n\n");
    printf("Jogador 1: %2.f \n", jogador1_rec);
    printf("Jogador 2: %2.f \n", jogador2_rec);
    printf("Jogador 3: %2.f \n", jogador3_rec);
    
    return 0;
}
