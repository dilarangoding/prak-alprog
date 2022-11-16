#include <iostream>

using namespace std;

int main(){

    int A[3][3] = {{50,30,60},{70,80,90}, {10,20,40}};
    int B[3][3] = {{10,20,40},{50,30,60},{70,80,90}};
    int C[3][3];
    int D[3][3];

    cout << "Matriks A"<<endl;
    for(int i =0; i <= 2; i++){
        for(int j = 0; j<=2; j++){
            cout << A[i][j] << " ";
        }
        cout <<endl;
    }

    cout << endl;
    cout << "Matriks B"<<endl;
    for(int i =0; i <= 2; i++){
        for(int j = 0; j<=2; j++){
            cout << B[i][j] << " ";
        }
        cout <<endl;
    }
    
    cout <<endl;
    cout << "Matriks Penjumlahan : "<<endl;
    for(int i =0; i <= 2; i++){
        for(int j = 0; j<=2; j++){
            C[i][j] = A[i][j] + B[i][j];
            cout << C[i][j] << " ";
        }
        cout <<endl;
     }

    cout <<endl;
    cout << "Matriks Pengurangan : "<<endl;
    for(int i =0; i <= 2; i++){
        for(int j = 0; j<=2; j++){
            C[i][j] = A[i][j] - B[i][j];
            cout << C[i][j] << " ";
        }
        cout <<endl;
     }

    return 0;
}