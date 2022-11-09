#include <iostream>

using namespace std;

int main(){
    cout << ""<<endl;
    int num1, num2,max;

    cout << "Masukan bilangan ke-1: ";
    cin  >> num1;

    cout << "Masukan bilangan ke-2: ";
    cin  >> num2;

    max = (num1 > num2 ) ? num1 : num2;
    
    do{
        if(max % num1 == 0 && max % num2 == 0){
            cout << "KPK: " << max;
            break;
        }else{
            max++;
        }
    }while(true);
    cout << ""<<endl<<endl;
    return 0;
}