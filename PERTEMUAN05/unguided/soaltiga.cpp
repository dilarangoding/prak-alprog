#include <iostream>
using namespace std;

int main(){
    int arr[5] = {1,2,3,4,5};
    int bil;

    cout << "Masukan bilangan : ";
    cin  >> bil;

    for(int i = 0; i < 5; i++){
        if(arr[i] == bil){
            cout << "Bilangan anda tersimpan di urutan array ke " << i + 1 <<endl;
        }
    }
    return 0;
}