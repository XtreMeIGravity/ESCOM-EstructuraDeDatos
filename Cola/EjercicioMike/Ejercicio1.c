#include <stdio.h>
#include <stdlib.h>
#include "Cola.h"
int main(){
    Cola q=nueva();
    for(int i = 0; i < 50; i++){
        q=formar(q,rand()%200);
    }
    ImpCola(q);
    printf("\n :)\n");
    ImpCola(q);
    
    Cola *Arreglo=dividePares(q);
    printf("\n Impares:");
    ImpCola(Arreglo[0]);
    printf("\n Pares:");
    ImpCola(Arreglo[1]);
    
    printf("\n Impares:");
    ImpCola(Arreglo[0]);
    printf("\n Pares:");
    ImpCola(Arreglo[1]);
    
    return 0;
}