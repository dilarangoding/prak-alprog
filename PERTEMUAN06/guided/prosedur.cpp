#include <iostream>

using namespace std;

void tampil_nama(){
    cout << "Nama saya adalah Robert!"<<endl;
}

void tampil_alamat(string x){
    cout << x;
}

int main(){
    tampil_nama();
    tampil_alamat("Jl DI Panjaitan");
    return 0;
}
