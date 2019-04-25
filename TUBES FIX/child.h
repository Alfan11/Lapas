#ifndef CHILD_H_INCLUDED
#define CHILD_H_INCLUDED
#include <iostream>

#define firstC(L) L.first
#define last(L) L.last
#define infoC(L) L->infoC
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

struct ListC {
    adrC first;
    adrC last;
};

bool isEmpty(ListC L);
void createList(ListC &L);
adrC alokasiC(infotypeC x);
void insertFirstC(ListC &L, adrC &P);
void insertLastC(ListC &L, adrC &P);
void deleteFirstC(ListC &L, adrC &P);
void deleteLastC(ListC &L, adrC &P);
adrC SearchC(ListC &L, infotypeC x);
void CountElm(ListC &L);
void printInfoC(ListC L);

#endif // CHILD_H_INCLUDED
