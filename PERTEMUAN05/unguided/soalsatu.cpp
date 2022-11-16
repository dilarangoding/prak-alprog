#include <iostream>

using namespace std;

int main(){
    int arr[5];
    int bill;

    for(int i=0; i < 5; i++){
        cout << "Masukan bilangan " <<  i + 1 << " : ";
        cin  >> bill;
        arr[i] = bill;
    }

    cout << "Bilangan yang ganjil adalah "<<endl;
    for(int j=0; j < 5; j++){
        if(arr[j] % 2 == 1){
            cout << arr[j] << endl;
        }
    }
    return 0;
}