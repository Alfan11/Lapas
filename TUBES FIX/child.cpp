#include "child.h"

bool isEmpty(ListC L) {
    return (firstC(L) == NULL);
}

void createList(ListC &L){
    firstC(L) = NULL;
    last(L) = NULL;
}
adrC alokasiC(infotypeC x){
    adrC P;

    P = new elemenC;
    infoC(P) = x;
    next(P) = NULL;

    return P;
}
void insertFirstC(ListC &L, adrC &P){
    if (isEmpty(L)) {
        firstC(L) = P;
        last(L) = P;
        next(P) = NULL;
        prev(P) = NULL;
    } else {
        next(P) = firstC(L);
        prev(firstC(L)) = P;
        firstC(L) = P;
    }
}

void insertLastC(ListC &L, adrC &P){
    if (isEmpty(L)) {
        firstC(L) = P;
        last(L) = P;
        next(P) = NULL;
        prev(P) = NULL;
    } else {
        next(last(L)) = P;
        prev(P) = last(L);
        last(L) = P;
    }
}
void deleteFirstC(ListC &L, adrC &P){
    if(isEmpty(L)){
        cout<<"EMPTY"<<endl;
    } else if(firstC(L) = last(L)){
        P = firstC(L);
        P = NULL;
    } else {
        P = firstC(L);
        firstC(L) = next(P);
        prev(firstC(L)) = NULL;
        next(P) = NULL;
    }
}
void deleteLastC(ListC &L, adrC &P){
    if (isEmpty(L)) {
        cout<<"List kosong"<<endl;
    } else if(firstC(L) = last(L)){
        P = firstC(L);
        firstC(L) = NULL;
        last(L) = NULL;
    } else {
        P = last(L);
        last(L) = prev(P);
        prev(P) = NULL;
        P = NULL;
    }
}
adrC SearchC(ListC &L, infotypeC x){
    adrC P;

    P = firstC(L);
    while((P != NULL) && (infoC(P).noThn != x.noThn)){
        P = next(P);
    }
    return P;
}

void CountElm(ListC &L){
    adrC P;
    int i;

    i = 0;
    P = firstC(L);
    while(P != NULL){
        i = i + 1;
        P = next(P);
    }
    //cout<<"Jumlah elemen : ",i," "<<endl;
}

void printInfoC(ListC L){
    adrC P;
    P = firstC(L);
     while(next(P) != firstC(L)) {
        cout << " >> "<<infoC(P).nama;
        P = next(P);
    }
}
