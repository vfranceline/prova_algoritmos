#include <stdio.h>

int main(){
    int divisor = 0, n = 0, resultado = 0;

    printf("Informe um número: ");
    scanf("%d", &n);
    fflush(stdin);

    for (int i = 1; i < n; i++){
        if(n%i == 0){
            resultado += i;
        }
    }

    if (resultado == n){
        printf("O número informado é um inteiro perfeito :) \n");
    }

    else{
        printf("Não é um inteiro perfeito :( \n");
    }

    return 0;
}