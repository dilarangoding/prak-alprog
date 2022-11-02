#include <iostream>
#include <iomanip>

using namespace std;

int main(){

    float number1;

    cout << "Masukan bilangan desimal: ";
    cin  >> number1;

    cout << "" << endl;
    cout << setiosflags(ios::fixed);
    cout << "Hasil akhir: " << setprecision(2) << number1 << endl;

    return 0;
}
