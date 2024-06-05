#include <stdio.h>

int main(){
    int numero, i, resposta;

    printf("informe o número desejado: ");

    scanf("%d", &numero);
    
    
    for (i = 0; i < numero; ++i){
        resposta = i + resposta;
    }

   printf("\nResposta: %d ",resposta);

   return 0;
    
}