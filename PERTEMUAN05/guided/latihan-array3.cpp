#include <iostream>

using namespace std;
int daftar_bilangan[10] = {1,2,3,4,5,6,7,8,9,10};

int main(){

    int indeks;
    int maks = 0;
    for(indeks = 0; indeks < 10; indeks++){
        if(daftar_bilangan[indeks] > maks){
            maks = daftar_bilangan[indeks];
        }
    }

    cout << "Nilai maksimum: "<< maks;
    
    return 0;
}