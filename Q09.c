/* 9 – Escrever um algoritmo para um programa que leia um conjunto de 50 fichas contendo cada uma, o nome, altura e o sexo de
uma pessoa. Calcule e imprima :
a) A maior e a menor altura da turma
b) A média de altura das mulheres
c) A média de altura da turma
*/


#include <stdio.h>
#include <string.h>

#define Num_fichas 5

typedef struct
{
    char nome[5];
    float altura;
    char sexo;
} Ficha;

int main(){
    Ficha fichas[Num_fichas];
    float altura_total = 0, altura_mulheres = 0;
    float maior_altura = 0, menor_altura = 999;
    int n_mulheres = 0;

    for(int i = 0; i < Num_fichas; i++){
        printf("Digite o nome da pessoa %d: ", i + 1);
        scanf("%s", fichas[i].nome);

        printf("Digite a altura da pessoa %d (em metros): ", i + 1);
        scanf("%f", &fichas[i].altura);

        printf("Digite o sexo da pessoa %d (M/F): ", i + 1);
        scanf(" %c", &fichas[i].sexo);
        

        if (fichas[i].altura > maior_altura){
            maior_altura = fichas[i].altura;
        }

        if (fichas[i].altura < menor_altura){
            menor_altura = fichas[i].altura;
        }

        altura_total += fichas[i].altura;

        if (fichas[i].sexo == 'F' || fichas[i].sexo == 'f'){
            altura_mulheres += fichas[i].altura;
            n_mulheres++;
        }
    }

    float mediaAlturaTurma = altura_total / Num_fichas;
    float mediaAlturaMulheres = altura_mulheres / n_mulheres;

    printf("\nMaior altura da turma: %.2f metros\n", maior_altura);
    printf("Menor altura da turma: %.2f metros\n", menor_altura);
    printf("Média de altura das mulheres: %.2f metros\n", mediaAlturaMulheres);
    printf("Média de altura da turma: %.2f metros\n", mediaAlturaTurma);

    return 0;
}