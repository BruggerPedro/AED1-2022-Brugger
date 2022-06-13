#include <stdio.h>
#include "lista.h"
#define maxLength 10

struct Lista{
    int value;
    int maxlength;
};

Lista *create(){
    Lista *lista = (Lista *)malloc(sizeof(Lista));
    lista->maxlength = 0;
    return lista;
}

int push(int value, Lista *lista){
    if(lista == NULL) return 0;

    if(lista->maxlength == maxLength) return -1;

    lista->value = value;
    lista->maxlength += 1;

    return 0;
}

void print(Lista *lista){
    int i = 0;
    while(i < lista->maxlength){
        printf("%d ", lista->value);
        i++;
    }
}

int isEmpty(Lista *lista){
    if(lista == NULL) return 1;

    if(lista->maxlength == 0) return 0;
}


int pop(int value, Lista *lista){
    if(lista == NULL) return -1;

    if(isEmpty(lista) == 0) return -1;

    int i = 0;


    
}

void free_lista(Lista *lista){
    free(lista);
    lista = NULL;
}
