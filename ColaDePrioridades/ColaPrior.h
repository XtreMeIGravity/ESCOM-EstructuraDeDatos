#include "Lista.h"

typedef Lista ColaPeor;

ColaPeor InsertarCP(ElemCola e,ColaPeor cp){
    return InsOrd(e,cp);
}
ColaPeor VaciaCP(){
    return vacia();
}
ColaPeor EliminarElemColaCP(ElemCola e1,ColaPeor cp){
    return EliminarElemCola(e1,cp);
}
ColaPeor EliminarElemColaCPEstrict(ElemCola e1,ColaPeor cp){
    if(esvacia(cp)){
        return vacia();
    }else if(sonIgualEstricto(e1,cabeza(cp))){
        return  resto(cp);
    }else{
        return cons(cabeza(cp),EliminarElemCola(e1,resto(cp)));
    }
}
void ImpCP(ColaPeor cp){
    ImpLista(cp);
}