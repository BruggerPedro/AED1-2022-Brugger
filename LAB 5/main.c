#include <stdio.h>
#include <stdlib.h>

#include "lista.h"

int main(){
    int vet[10] = {4, 8, -1, 19, 2, 7, 8, 5, 9, 22};

    Lista *Lista;

    Lista = create();
    int i = 0;
    while(i < 10){
        push(vet[i], Lista);
        i++;
    }
    print(Lista);

    return 0;
}
