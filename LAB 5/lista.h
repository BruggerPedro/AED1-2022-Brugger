#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Lista Lista;

Lista *create();
int push(int value, Lista *lista);
void print(Lista *lista);
int pop(int value, Lista *lista);
void free_lista(Lista *lista);
