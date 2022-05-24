#include <stdio.h>
#include <stdlib.h>

struct individuo{
  int codigo_genetico[10];    // valores binarios aleatorios
  float aptidao_abs;        // pontencial de cada individuo (0.0 <= aptidao <= 10.0)
  float aptidao_relativa;    // deve ser calculada em tempo de execuC'C#o...
};

struct populacao{
  struct individuo *pop;    // um vetor de N individuos
  int tamanho;            // tamanho N da populaC'C#o (N = 100)
};

typedef struct populacao populacao;

int main (){
    int num, i = 0;
    float soma = 0;
    double sorteio, resultado = 0;

    printf ("Insira a quantidade de individuos: ");
    scanf ("%d", &num);

    populacao p;

    p.tamanho = num;

    p.pop = (struct individuo *) malloc (p.tamanho * sizeof (struct individuo)); // Fazendo a alocacao

    if(p.pop == NULL){
        printf("\n Erro: Memoria Insuficiente!!!\n");
        return -1;
    }

    for (i = 0; i < num; i++){
        p.pop[i].aptidao_abs = ((float) rand ()) / ((float) RAND_MAX) * 10.0;
        soma += p.pop[i].aptidao_abs; 
    }

    for (i = 0; i < num; i++){
        p.pop[i].aptid
        ao_relativa = p.pop[i].aptidao_abs / soma;
    }

    sorteio = ((double) rand ()) / ((double) RAND_MAX);

    for (i = 0; i < 100000; i++){ // Executando o sorteio do for abaixo 100.000 vezes
        for (i = 0; i < num; i++){
            if (p.pop[i].aptidao_relativa < sorteio){
                resultado += p.pop[i].aptidao_relativa;
            }
        }
        printf ("O resultado do sorteio eh: %lf\n", resultado); //%lf para imprimir um double
    }
    return 0;
}
