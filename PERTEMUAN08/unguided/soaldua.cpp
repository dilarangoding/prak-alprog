#include <iostream>
using namespace std;

void ascending(int arr[], int length){
    int i, j;
    char tmp;

    for (int i = 1; i < length; i++)
    {
        j = i;

        while(j > 0 && arr[j - 1]  > arr[j]){
            tmp = arr[j];
            arr[j] = arr[j-1];
            arr[j - 1] = tmp;
            j--;
        }
    }

}

int binary_search(int data[], int n, int k){
    int atas, bawah, tengah, posisi;
    bool ada;

    ada   = false; 
    bawah = 0;
    atas  = n - 1;
    posisi = -1;

    while(bawah <= atas){
        tengah = (atas + bawah) / 2;
        if(k == data[tengah]){
            posisi = tengah;
            break;
        }else if(k < data[tengah]){
            atas = tengah -1;
        }else if(k > data[tengah]){
            bawah = tengah + 1;
        }
    }

    return posisi;
}

int main(){
    
    int data[] = {12102001, 12102002, 12102003, 12102004, 12102005, 12102006, 12102007, 12102008, 12102009, 12102010, 12102011, 12102012,  12102013};
    int k      = 12102011 ;
    int n      = sizeof(data)/sizeof(data[0]);

    ascending(data, n);
    int posisi = binary_search(data, n,k);

    if(posisi != -1){
        cout << "Nim " << k << " ditemukan pada posisi indeks ke-"<< posisi <<endl;
    }else{
        cout << "Nim " << k << " tidak ditemukan" << endl;
    }

    return 0;
}