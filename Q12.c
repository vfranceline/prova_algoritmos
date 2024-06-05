#include <stdio.h>

int main(){
    int popA, popB, anos = 0;
    
    popA = 90000000;
    popB = 200000000;

    while(popA<popB){
        popA = popA*1.03;
        popB = popB*1.015;
        anos = anos + 1;
        
    }
    
    printf("Irá demorar %d anos.\n", anos);
}