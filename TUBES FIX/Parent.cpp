#include "Parent.h"

void createList(ListP &L){
    first(L) = nil;
}
adrP alokasiP(infotypeP x){
    adrP P;
    P = new elemenP;
    info(P) = x;
    nextP(P) = nil;
    //nextC(P) = nil;
    return P;
}
void insertFirst(ListP &L, adrP P){
    if (first(L) == nil){
        first(L) = P;
    }
    else{
        nextP(P) = first(L);
        first(L) = P;
    }
}
void insertLast(ListP &L, adrP P){
    adrP Q;
    if (first(L) == nil){
        first(L) = P;
    }
    else{
        Q = first(L);
        while (nextP(Q) != nil){
            Q = nextP(Q);
        }
        nextP(Q) = P;
    }
}
void deleteFirst(ListP &L, adrP &P){
    if (first(L) == nil){
        cout << "Data masih kosong" << endl;
    }
    else if (nextP(first(L)) == nil){
        P = first(L);
        first(L) = nil;
    }
    else{
        P = first(L);
        first(L) = nextP(first(L));
        nextP(P) = nil;
    }
}
void deleteLast(ListP &L, adrP &P){
    adrP Q;
    if (first(L) == nil){
        cout << "Data masih kosong" << endl;
    }
    else if (nextP(first(L)) == nil){
        P = first(L);
        first(L) = nil;
    }
    else{
        Q = first(L);
        while (nextP(nextP(Q)) != nil){
            Q = nextP(Q);
        }
        P = nextP(Q);
        nextP(Q) = nil;
    }
}
adrP searchParent(ListP L, infotypeP x){
    adrP P = first(L);
    while((info(P).namaLapas != x.namaLapas) && (P != NULL)){
        P = nextP(P);
    }
    return P;
}
void countElm(ListP &L){
    adrP P;
    int Jumlah;
    if (first(L) == nil){
        cout << "data masih kosong" << endl;
    }
    else{
        P = first(L);
        Jumlah = 0;
        while (P != nil){
            Jumlah = Jumlah + 1;
            P = nextP(P);
        }
        cout << Jumlah << endl;
    }
}
void viewAll(ListP &L){
    adrP P;
    P = first(L);
    if(first(L)!=NULL) {
        do {
            cout << info(P).namaLapas<<endl;
            cout << info(P).kategori<<endl;
            printInfoC(child(P));
            P = nextP(P);
        } while((P)!=first(L));
    }
}

