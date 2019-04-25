#ifndef PARENT_H_INCLUDED
#define PARENT_H_INCLUDED

#include <iostream>
#include "child.h"
using namespace std;

#define nil NULL
#define nextP(P) (P)->nextP
#define first(L) (L).first
#define info(P) (P)->info
#define child(P) P->child

typedef struct infotypeP;

struct infotypeP{
    string namaLapas;
    string kategori;
    int tingkat;
};
typedef struct elemenP* adrP;

struct elemenP{
    infotypeP info;
    adrP nextP;
    ListC child;

};
struct ListP{
    adrP first;
};

void createList(ListP &L);
adrP alokasiP(infotypeP x);
void insertFirst(ListP &L, adrP);
void insertLast(ListP &L, adrP);
void deleteFirst(ListP &L, adrP &P);
void deleteLast(ListP &L, adrP &P);
adrP searchParent(ListP L, infotypeP x);
void countElm(ListP &L);
void viewAll(ListP &L);

#endif // PARENT_H_INCLUDED
