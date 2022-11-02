#include <iostream>

using namespace std;

void Mata(){
    cout << "\nJENIS PENYAKIT MATA"<<endl;
    cout << "1. Katarak"<<endl;
    cout << "2. Plus/Minus"<<endl;
    cout << "3. Silinder"<<endl;
}

void Jantung(){
    cout << "\nJENIS PENYAKIT JANTUNG"<<endl;
    cout << "1. Jantung Koroner"<<endl;
    cout << "2. Katup Jantung"<<endl;
    cout << "3. Otot Jantung"<<endl;
}

int main(){

    int nama_operasi, jenis_penyakit;

    cout << "<< MENU MENGHITUNG BIAYA OPERASI >> "<<endl;
    cout << "1. Hitung Biaya Operasi Mata"<<endl;
    cout << "2. Hitung Biaya Operasi Jantung"<<endl;
    cout << "\nMasukan Pilihan Anda: ";
    cin  >> nama_operasi;

    if(nama_operasi == 1){

       Mata();
       cout << "\nMasukan jenis penyakit mata: ";
       cin  >> jenis_penyakit;

        switch(jenis_penyakit){
            case 1:
                cout << "\nBiaya Operasi Mata Katarak = Rp. 7.500.000"<<endl;
                break;
            case 2:
                cout << "\nBiaya Operasi Mata Plus/Minus = Rp. 5.000.000"<<endl;
                break;
            case 3:
                cout << "\nBiaya Operasi Mata Silinder = Rp. 4.000.000"<<endl;
                break;
            default:
                cout << "Invalid menu! silahkan pilih [1-3]";
                break;
        }


    }else if(nama_operasi == 2){

        Jantung();
        cout << "\nMasukan jenis penyakit jantung: ";
        cin  >> jenis_penyakit;

        switch(jenis_penyakit){
            case 1:
                cout << "\nBiaya Operasi Jantung Koroner = Rp. 500.000.000"<<endl;
                break;
            case 2:
                cout << "\nBiaya Operasi Katup Jantung = Rp. 350.000.000"<<endl;
                break;
            case 3:
                cout << "\nBiaya Operasi Otot Jantung = Rp. 450.000.000"<<endl;
                break;
            default:
                cout << "Invalid menu! silahkan pilih [1-3]";
                break;
        }

    }else{
        cout << "Invalid menu! silahkan pilih [1-2] "<<endl;
    }

    return 0;
}
