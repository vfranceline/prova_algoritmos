#include <stdio.h>

int main(){
    int n, proximo = 0, anterior = 0, atual = 0;

    printf("Quantos números da sequencia fibonacci você deseja? \n");
    scanf("%d", &n);

    for (int i = 0; i <= n; i++){
        if (i == 1){
            atual = 1;
        }
        else{
            printf(" %d", atual);
            proximo = anterior + atual;
            anterior = atual;
            atual = proximo;

        }
    }

    return 0;
}