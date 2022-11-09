#include <iostream>

using namespace std;

int main(){
    
    int bil, counter, total=1;

    cout << "Masukan bilangan: ";
    cin  >> bil;

    cout << "Masukan pencacah: ";
    cin  >> counter;
    
    for(int i = 1; i <= counter; i++){
        total = total * bil;
    }

    cout << "Hasil Pangkat: "<< total;
   
    return 0;
}