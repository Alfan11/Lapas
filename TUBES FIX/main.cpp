#include <iostream>
#include "Parent.h"
#include "child.h"

using namespace std;

adrP P_input(){
    infotypeP data;

    cout<<"Nama Lapas        : ";
    cin>>data.namaLapas;
    cout<<"Kategori          : ";
    cin>>data.kategori;
    cout<<"Tingkat Kejahatan : ";
    cin>>data.tingkat;

    return alokasiP(data);
}

adrC get_input(){
    infotypeC x;

    cout<<"Nama Tahanan   : ";
    cin>>x.nama;
    cout<<"Gender         : ";
    cin>>x.jenisKl;
    cout<<"Umur           : ";
    cin>>x.umur;
    cout<<"No tahanan     : ";
    cin>>x.noThn;
    cout<<" "<<endl;

    return alokasiC(x);
}


int main(){
    ListP LP;
    adrP P;
    adrC C;
    infotypeP cari;

    createList(LP);

    //parent
    P = P_input();
    insertLast(LP,P);

    //child
    cout<<"Nama Lapas : ";
    cin>>cari.namaLapas;

    P = searchParent(LP, cari);
    C = get_input();
    insertLastC(child(P),C);

    viewAll(LP);


}
