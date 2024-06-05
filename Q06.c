#include <stdio.h>

int main(){
    int decimal, binario[20];


    printf("INFORME O NÚMERO DECIMAL QUE SERÁ CONVERTIDO PARA BINARIO: ");
    scanf("%d", &decimal);

    while(decimal != 0){
        for (int i=0; i<=20; i++){
            if (decimal%2==0){
                binario[i] = 0;
                decimal = decimal/2;
            }
            else{
                binario[i] = 1;
                decimal = decimal/2;
            }
        }
    }
    
    int tam = sizeof(binario) / sizeof(binario[0]);

    
    for (int i=tam; i >= 0; i--){

        printf("%d", binario[i]);
    }

    return 0;
}