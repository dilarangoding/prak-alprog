#include <iostream>

using namespace std;

int main(){

    float num1, num2;
    float hasil;

    cout << "Masukan Bilangan yang akan dibagi: ";
    cin  >> num1;

    cout << "Masukan bilangan pembagi: ";
    cin  >> num2;

    cout << ""<<endl;

    if(num1 == 0 || num2 == 0){
        cout << "Silahkan masukan bilangan lebih dari 0 " << endl;
    }else{
        hasil = num1 / num2;
        cout << "Hasil bagi : " << hasil << endl;
    }

}
