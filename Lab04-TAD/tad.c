#include <stdio.h>
#include "tad.h"

struct ponto{
    int x;
    int y;
}

Ponto * gera_pto(){
    Ponto * p;
    p = (Ponto *)malloc(sizeof(Ponto));
    return p;
}

int set_pto(int x, int y, Ponto *pto){
    pto->x = x;
    pto->y = y;
}

int get_pto(Ponto *pto, int *x, int *y){
    if(pto == NULL){
        printf("Não há pontos para serem calculados!");
        return 0;
    }
    *x = pto->x;
    *y = pto->y;
    return 1;
}

float dist_pto(Ponto *ponto,){
    dist = sqrt(pow(x1-x0,2)+pow(y1-y0,2));
}

void libera_pto(Ponto **pto){
    free(*pto);
    *pto = NULL;
}
