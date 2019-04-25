#include <iostream>
#ifndef LAPASD_H_INCLUDED
#define LAPASD_H_INCLUDED
#define first(L) L.first
#define last(L) L.last
#define infoC(L) L->info
#define next(L) L->next
#define prev(L) L->prev

using namespace std;

struct infotypeC{
    string nama;
    char jenisKl;
    int umur;
    int noThn;
};

typedef struct elemenC *adrC;

struct elemenC{
    infotypeC infoC;
    adrC next, prev;
};

struct List {
    adrC first;
    adrC last;
};

bool isEmpty(List L);
void createList(List &L);
adrC alokasi(infotypeC x);
void insertFirstC(List &L, adrC &P);
void insertLastC(List &L, adrC &P);
void deleteFirstC(List &L, adrC &P);
void deleteLastC(List &L, adrC &P);
adrC SearchC(List &L, infotypeC x);
void CountElm(List &L);
void printInfo(List &L);


#endif // LAPASD_H_INCLUDED
