#include <iostream>

using namespace std;

int sequential_search(int data [], int n, int k){
    int posisi, i, ketemu;

    if(n <= 0){
        posisi = -1;
    }else{
        ketemu = 0;
        i = 1;

        while((i < n -1) && !ketemu){
            if(data[i] == k){
                posisi = i;
                ketemu =i;
            }else{
                i++;
            }

            if(!ketemu){
                posisi = -1;
            }

        }
    }

    return posisi;
}

int main(){
   int n      = 7;
   int data[] = {1, 0,4,2,5,7,9};
   int k      = 4;

   int posisi = sequential_search(data, n, k);

   if(posisi != -1){
    cout << "Kunci " << k << " ditemukan pada posisi indeks ke-" << posisi <<endl;
   }else{
    cout << "kunci " << k << " tidak ditemukan "<< endl;
   }

   return 0;
}