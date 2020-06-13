#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "ElemCola.h"
#include "ColaPrior.h"

int main()
{
    ColaPeor A=VaciaCP();
    ElemCola e;
    e=CreaElemColaP(1,'a');
    A=InsertarCP(e,A);
    e=CreaElemColaP(2,'b');
    A=InsertarCP(e,A);
    e=CreaElemColaP(0,'c');
    A=InsertarCP(e,A);
    e=CreaElemColaP(0,'d');
    A=InsertarCP(e,A);
    ImpCP(A);
    printf("\n");
    printf("%d\n",NumElemCola(A));
    //Borramos estrictamente
    e=CreaElemColaP(0,'d');
    A=EliminarElemColaCPEstrict(e,A);
    ImpCP(A);
    return 0;
}
