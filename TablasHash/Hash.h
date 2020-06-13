#include "Lista.h"
#define k 127
typedef Lista*Hash;
int esVacioH(Hash h){
    int i=0, j=0;
    while(i<k){
        j+=esvacia(h[i++]);
    }
    return j;
}
Hash creaTH(){
    int i;
    Hash t=(Hash)malloc(sizeof(Lista)*k);
    for(i=0;i<k;i++){
        t[i]=vacia();
    }
    return t;
}
/////En base a indicie
Elem recuperaEH(int index,Hash h){
    int pos;
    pos=index%k;
    return dameExK(index,h[pos]);
}
int estaEnTH(int index,Hash h){
    int pos;
    pos=index%k;
    return EstaEnxK(index,h[pos]);
}
Hash ElimnaTH(int index,Hash h){
    int pos;
    pos=index%k;
    if(estaEnTH(index,h)){
        h[pos]=EliminarElemxK(index,h[pos]);
        return h;
    }else{
        return h;
    }
}
Hash insertarEH(Hash h, Elem e){
    int pos;
    pos=(e.na)%k;
    h[pos]=cons(e,h[pos]);
    h[pos]=OrdListAsc(h[pos]);
    return h;
}
void impHash(Hash h){
    int j=0;
    //if(!esVacioH(h)){
        for(j=0;j<k;j++){
            ImpLista(h[j]);
            printf("\n");
        }
    //}
}
void impHashFile(Hash h,FILE*temp){
    int j=0;
    //if(!esVacioH(h)){
        for(j=0;j<k;j++){
            ImpListaFILE(h[j],temp);
            fprintf(temp,"\n");
        }
    //}
}

