#include <stdio.h>
#include <math.h>

int main(){
    int decimal = 0, n, i;
    
    printf("Quantos Bits terá o seu binário?: ");
    scanf("%d", &n);
    
    int binario[n];
    
    for(i = 0; i < n; i++){
        printf("Informe o bit do Binário: ");
        scanf("%d",&binario[i]);
    }
    
    for(i = 0; i < n; i++){
        decimal = decimal + binario[i] * pow(2, n - i - 1);
    
    }

    printf("O número é %d\n", decimal);
    
    return 0;
}