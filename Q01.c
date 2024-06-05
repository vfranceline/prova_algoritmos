#include <stdio.h>
 
 
int main(){

  float nota1, nota2, nota3, media, peso1, peso2, peso3;

  printf("Insira a primeira nota: ");
  scanf("%f", &nota1);
 
  printf("\nInsira a segunda nota: ");
  scanf("%f", &nota2);
 
  printf("\nInsira a terceira nota: ");
  scanf("%f", &nota3);
 
    if (nota1 >= 6){
        peso1 = 5;
    }
    else{
        peso1 = 2.5;
    }
 
    if (nota2 >= 6){
        peso2 = 5;
    }
    else{
        peso2 = 2.5;
    }

    if (nota3 >= 6){
        peso3 = 5;
    }
    else{
        peso3 = 2.5;
    }

    media = ((nota1*peso1) + (nota2*peso2) + (nota3*peso3))/(peso1+peso2+peso3);
    
    printf("A média foi: %.2f \n", media);

    return 0;
}