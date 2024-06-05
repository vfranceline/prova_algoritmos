/*
3 – Um determinado material radioativo perde metade de sua massa a cada 50 segundos. 
Dada a massa inicial em gramas, fazer um algoritmo que determine o tempo necessário para 
que essa massa se torne menor do que 0,5 grama. Escreva a massa inicial, a massa final e 
o tempo calculado em horas, minutos e segundos
*/

#include <stdio.h>
#include <math.h>

int main(){
    float massa_inicial, massa_final = 0.5, massa_i;
    int tempo_segundos = 0, tempo_minutos, segundos, tempo_horas;

    scanf("%f", &massa_inicial);

    massa_i = massa_inicial;

    while(massa_final < massa_inicial){
        massa_inicial = massa_inicial/2;
        tempo_segundos = tempo_segundos + 50;
    }

    segundos = tempo_segundos%60;
    tempo_minutos = (tempo_segundos%3600)/60;
    tempo_horas = tempo_segundos/60;

    printf("Horas %d \n", tempo_horas);
    printf("Minutos %d \n", tempo_minutos);
    printf("Segundsos %d \n", segundos);
    
    printf("Massa Inicial %f \n", massa_i);
    printf("Massa final %f \n", massa_final);
    
    return 0;
}