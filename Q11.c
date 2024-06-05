#include <stdio.h>
#include <string.h>

int main(){
    int cont = 0, tam = 0;
    
    printf("Quantos algarismos vai ter seu número?");
    scanf("%d", &tam);

    int j = tam-1;
    char num[tam];

    printf("digite o número: ");
    scanf("%s", &num);
    fflush(stdin);

    for(int i =0; i<tam; i++){
        if (num[i] == num[j]){
            cont++;
        }
        j--;
    }

    if (cont == tam){
        printf("esse número é um palíndromo \n");
    }

    else{
        printf("esse número não é um palíndromo \n");
    }

    return 0;
}