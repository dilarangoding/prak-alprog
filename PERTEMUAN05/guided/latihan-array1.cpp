#include <iostream>

using namespace std;
string bulan[] = {"Januari","Februari","Maret","April","Mei","Juni","Juli","Agustus","September","Oktober","November","Desemeber"};
int masukan;

int main(){

    cout << "Masukkan nomor bulan: ";
    cin >> masukan;
    cout << "Bulan yang anda masukan adalah :" << bulan[masukan-1];
    return 0;

}