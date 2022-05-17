#include <stdio.h>
#include <stdlib.h>

int main(){
    
    char string[100];
    int i = 0;
    
    printf("---------- STRING MAIUSCULA ----------\n\n");
    printf("Informe a string desejada: "); 
    scanf("%[^\n]", string);

    while( string[i] != '\0' ) 
    {
       if( string[i] >= 'a' && string[i] <= 'z' )
          string[i] = string[i] - 32;
       i++;
    }

    printf("\nA saida eh: "); 
    puts(string);

    return 0;
}
