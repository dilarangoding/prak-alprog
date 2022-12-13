#include <iostream>
using namespace std;
int x,y;

int fungsi_kuadrat(int x, int y){
    int hasil = (x*x) + (y*y);

    return hasil;
}

int main(){
    cout << "Masukkan x : ";
    cin  >> x;
    cout << "Masukan y : ";
    cin  >> y;
    cout << "Hasil: " << fungsi_kuadrat(x,y) << endl;
}
