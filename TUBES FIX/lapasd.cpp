#include "lapasd.h"

bool isEmpty(List L) {
    return (first(L) == NULL);
}

void createList(List &L){
    first(L) = NULL;
    last(L) = NULL;
}
adrC alokasi(infotypeC x){
    adrC P;

    P = new elemenC;
    infoC(P) = x;
    next(P) = NULL;

    return P;
}
void insertFirstC(List &L, adrC &P){
    if (isEmpty(L)) {
        first(L) = P;
        last(L) = P;
        next(P) = NULL;
        prev(P) = NULL;
    } else {
        next(P) = first(L);
        prev(first(L)) = P;
        first(L) = P;
    }
}

void insertLastC(List &L, adrC &P){
    if (isEmpty(L)) {
        first(L) = P;
        last(L) = P;
        next(P) = NULL;
        prev(P) = NULL;
    } else {
        next(last(L)) = P;
        prev(P) = last(L);
        last(L) = P;
    }
}
void deleteFirstC(List &L, adrC &P){
    if(isEmpty(L)){
        cout<<"EMPTY"<<endl;
    } else if(first(L) = last(L)){
        P = first(L);
        P = NULL;
    } else {
        P = first(L);
        first(L) = next(P);
        prev(first(L)) = NULL;
        next(P) = NULL;
    }
}
void deleteLastC(List &L, adrC &P){
    if (isEmpty(L)) {
        cout<<"List kosong"<<endl;
    } else if(first(L) = last(L)){
        P = first(L);
        first(L) = NULL;
        last(L) = NULL;
    } else {
        P = last(L);
        last(L) = prev(P);
        prev(P) = NULL;
        P = NULL;
    }
}
adrC SearchC(List &L, infotypeC x){
    adrC P;

    P = first(L);
    while((P != NULL) && (infoC(P).noThn != x.noThn)){
        P = next(P);
    }
    return P;
}

void CountElm(List &L){
    adrC P;
    int i;

    i = 0;
    P = first(L);
    while(P != NULL){
        i = i + 1;
        P = next(P);
    }
    cout<<"Jumlah elemen : ",i," "<<endl;
}

void printInfo(List &L){
    adrC P;

    P = first(L);
    while(P != NULL){
        cout<<"Nama   Tahanan : "<<infoC(P).nama<<endl;
        cout<<"No     Tahanan : "<<infoC(P).noThn<<endl;
        cout<<"Gender Tahanan : "<<infoC(P).jenisKl<<endl;
        cout<<"Umur   Tahanan : "<<infoC(P).umur<<endl;
        cout<<""<<endl;
        P = next(P);
    }
}
