#include <stdio.h>
#include <stdlib.h>

int fat(int num){
    if(num == 0){
        return 1;
    }
    if(num == 1){
        return num;
    }
    
    num = num * fat(num - 1);
}


int main(){
    int i, ini = 1, fim= 10;
    
    printf("-------- FATORIAL --------\n\n");
    for(i = ini; i <= fim; i++){
        printf("%d! = %d\n", i, fat(i));
    }
    return 0;
}
