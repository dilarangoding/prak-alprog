#include <iostream>

using namespace std;

int main(){

    string huruf;

    cout << "Masukan sebuah huruf: ";
    cin  >> huruf;

    if(huruf == "A" || huruf == "I" || huruf == "U" || huruf == "E" || huruf == "O"){
        cout << huruf << " adalah salah satu huruf vokal"<<endl;
    }

    return 0;
}
