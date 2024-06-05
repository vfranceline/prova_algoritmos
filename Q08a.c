#include <stdio.h>

int main(){
    float somatorio = 0;

    for (float impar = 1; impar <= 99; impar+=2){
        somatorio += (1/impar);
    }

    printf("Resposta: %f\n", somatorio);

    return 0;
}