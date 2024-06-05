#include <stdio.h>

int main(){
    int fatorial, i, resposta;

    printf("informe o número desejado: ");

    scanf("%d", &fatorial);
    
    resposta = 1; //se deixar resposta = 0 ele vai dar 0 quando multiplicar pelo i
    
    for (i = 1; i <= fatorial; ++i){
        resposta = resposta * i;
    }

   printf("\nO fatorial é %d\n", resposta);

   return 0;
    
}