#include <iostream>
using namespace std;

int isEven(int num){
    if(num % 2 == 0){
       cout << "Bilangan yang anda masukan adalah bilangan genap";
    }else{
       cout << "Bilangan yang anda masukan adalah bilangan ganjil";
    }
}

int main(){
    int i;
    cout << "Masukan Bilangan : ";
    cin  >> i;
    isEven(i);
}
