#include <iostream>
#include <cmath>
using namespace std;
int i, num1,num2;

int add(int num1, int num2){
    return num1 + num2;
}

int subtraction(int num1, int num2){
    return num1 - num2;
}

int multiplied(int num1, int num2){
    return num1 * num2;
}

int divided(int num1, int num2){
    return num1 / num2;
}

int power(int num1, int num2){
    return pow(num1, num2);
}

void calculator(){
    cout << "1. Penjumlahan"<<endl;
    cout << "2. Perkalian"<<endl;
    cout << "3. Pembagian"<<endl;
    cout << "4. Pengurangan"<<endl;
    cout << "5. Pangkat"<<endl;
}

void inputUser(){
    cout << "Bilangan pertama : ";
    cin  >> num1;
    cout << "Bilangan kedua : ";
    cin  >> num2;
}


int main(){

    calculator();
    cout << "Masukkan pilihan : ";
    cin  >> i;

    switch (i)
    {
    case 1:
        inputUser();
        cout << "Hasil penjumlahan : " << add(num1, num2) <<endl;
        break;
    case 2:
        inputUser();
        cout << "Hasil perkalian : " << multiplied(num1, num2) <<endl;
        break;
    case 3:
        inputUser();
        cout << "Hasil pembagian : " << divided(num1, num2) <<endl;
        break;
    case 4:
        inputUser();
        cout << "Hasil pengurangan : " << subtraction(num1, num2) <<endl;
        break;
    case 5:
        inputUser();
        cout << "Hasil pangkat : " << power(num1, num2) <<endl;
        break;
    default:
        cout << "Pilihan tidak ada";
        break;
    }

}
