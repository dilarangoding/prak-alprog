#include <iostream>

using namespace std;

int main(){
  
    int bil;
    long total;

    cout << "Masukan bilangan: ";
    cin  >> bil;
    int i = bil;
    cout << "Total Nilai = ";
    while(i >= 1){
        total += i;
        
        if(i != 1){
            cout << i << " + ";
        }else{
            cout << i << " = ";
        }
        i--;
    }
    
    cout  << total;

    return 0;
}