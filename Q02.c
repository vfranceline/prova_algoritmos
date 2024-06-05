#include <stdio.h>

int main(){
    float a, b, c, maior, menor, meio, saida[3];
    int i, j;

    printf("Escolha uma opção: \n1-Escrever os valores em ordem crescente.\n2-Escrever os valores em ordem decrescente.\n3-Escrever o valores com o maior no meio.\nSua resposta: ");
    scanf("%d", &i);
    
    printf("Informe o primeiro número: ");
    scanf("%f", &a);

    printf("Informe o segundo número: ");
    scanf("%f", &b);

    printf("Informe o terceiro número: ");
    scanf("%f", &c);

    if (a > b && a > c){
        maior = a;
        
        if (b < c){
            menor = b;
            meio = c;
        }
        else{
            menor = c;
            meio = b;
        }
    }
    
    if (b > a && b > c){
        maior = b;
        
        if (a < c){
            menor = a;
            meio = c;
        }
        else{
            menor = c;
            meio = a;
        }
    }

    if (c > b && c > a){
        maior = c;
        
        if (b < a){
            menor = b;
            meio = a;
        }
        else{
            menor = a;
            meio = b;
        }
    }
    
    
    switch (i)
    {
    case 1: //ordem crescente
        saida[0] = menor;
        saida[1] = meio;
        saida[2] = maior;
        
        break;
    case 2: //ordem decrescente
        saida[0] = maior;
        saida[1] = meio;
        saida[2] = menor;

        break;
    case 3:
        //maior no meio
        saida[0] = meio;
        saida[1] = maior;
        saida[2] = menor;
        
        break;
    }
    
    printf("Sua resposta é: ");
    
    for(j=0; j < 3; j++){
        printf("%2.f ", saida[j]);
    }

    return 0;
}