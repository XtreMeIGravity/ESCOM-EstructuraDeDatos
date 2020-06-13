#include <stdio.h>
#include <stdlib.h>

#include "ElemPrincipal.h"
#include "Lista.h"
#include "Elem.h"
#include "ListaG.h"


int main(int argc, char const *argv[])
{
    Lista l1=cons(6,cons(5,cons(3,cons(1,vacia()))));
    Lista l2=cons(15,cons(20,cons(30,cons(1,vacia()))));
    ListaG lg=consLG(creaElemEntero(1),consLG(creaElemLista(l1),consLG(creaElemLista(l2),consLG(creaElemEntero(4),vaciaLG()))));
    printf("Lista creada correctamente\n");
    ImpListaLG(lg);
    return 0;
}
