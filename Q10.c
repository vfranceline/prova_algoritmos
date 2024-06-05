/* 10 - Dados n e uma seqüência de n números inteiros, determinar o comprimento de um segmento crescente de comprimento
máximo.
Exemplos:
Na seqüência 5, 10, 3, 2, 4, 7, 9, 8, 5 o comprimento do segmento crescente máximo é 4.
Na seqüência 10, 8, 7, 5, 2 o comprimento de um segmento crescente máximo é 1.
*/

#include <stdio.h>

int main(){
    int tamanho = 0, comp_max = 1, comp_atual = 1;

    printf("Digite o tamanho da sequência: ");
    scanf("%d", &tamanho);

    int sequencia[tamanho];

    for (int i = 0; i < tamanho; i++){
        printf("Digite o número %d da sequencia: ", i + 1);
        scanf("%d", &sequencia[i]);
    }

    for (int i = 1; i < tamanho; i++){
        if (sequencia[i] > sequencia[i-1]){
            comp_atual++;
        }
        else{
            if (comp_atual > comp_max) {
                comp_max = comp_atual;
            }

            comp_atual = 1;
        }
    }
    if (comp_atual>comp_max){
        comp_max = comp_atual;
    }

    printf("O comprimento do segmento crescente máximo é %d.\n", comp_max);

    return 0;
}