#include <iostream>
using namespace std;

int luas(int jari_jari){
    return  3.14 * jari_jari * jari_jari;
}

int main(){
    int j;
    cout << "Masukan Jari jari : ";
    cin  >> j;
    cout << "Luas lingkaran nya adalah : " <<  luas(j);
}
