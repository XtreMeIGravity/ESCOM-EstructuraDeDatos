#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Lista.h"

int main(){
    Lista a,b;
    a=cons("Batman",cons("Bendi",cons("David",cons("Alek",vacia()))));
    b=cons("Bendi",cons("issac",vacia()));
    printf("\n");
    ImpLista(a);
    printf("\n");
    ImpLista(b);
    printf("\n");
    ImpLista(UnirLista(a,b));
    printf("\n");
    ImpLista(IntersectaLista(a,b));
    return 0;
}