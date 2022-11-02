#include <iostream>

using namespace std;

int main(){

    int bil;

    cout << "Masukan bilangan bulat yang akan diperiksa: ";
    cin  >> bil;

    if(bil > 0){
        cout << bil << " adalah bilangan positif";
    }else if(bil < 0){
        cout << bil << " adalah bilangan negatif";
    }else{
        cout << "Anda memasukan bilangan 0";
    }

    return 0;
}
