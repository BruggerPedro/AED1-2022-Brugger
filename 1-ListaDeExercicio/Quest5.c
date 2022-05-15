#include <stdio.h>
#include <stdlib.h>

int main()
{
    int linhas, i, j, num = 1;
    
    printf("------ TRIANGULO DE FLOYD ------\n\n");
    printf("Insira o numero de linhas: ");
    scanf("%d",&linhas);
    printf("\n\n------ RESULTADO ------\n\n");
    for(i=1; i <= linhas; i++)
    {
        for(j=1; j <= i; ++j)
        {
            printf("%d ", num);
            ++num;
        }

        printf("\n");
    }

    return 0;
}
