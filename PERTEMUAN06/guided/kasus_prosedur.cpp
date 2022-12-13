#include <iostream>
using namespace std;

int s;

void keliling_luas_lingkarang(int s){
    int luas = s * s;
    int keliling = 4 * s;
    cout << "Keliling : " << keliling << endl;
    cout << "Luas : " << luas << endl;
}

int masukan;
int main(){
    cout << "Masukkan panjang Sisi :";
    cin  >> s;
    keliling_luas_lingkarang(s);
    return 0;
}
