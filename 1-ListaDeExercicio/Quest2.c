#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int x,y;
    float dist;
    
    printf("Insira as coordenadas de x e y: ");
    printf("\n\nX = ");
    scanf("%d",&x);
    printf("\nY = ");
    scanf("%d",&y);
    
    dist = sqrt(pow(0-x,2) + pow(0-y,2));
    
    printf("\nA distancia entre os pontos %d e %d eh: %f", x,y,dist);
    
    return 0;
}
