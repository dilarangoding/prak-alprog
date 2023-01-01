#include <iostream>

using namespace std;

int sequential_search(string data [], int n, string k){
    int posisi, i, ketemu;

    for (int i = 0; i < n; ++i)
	{
		if (data[i] == k)
		{
			return i;
		}
	}

	return -1;
}

int main(){
   int n      = 7;
   string data[] = {"R 300 SR", "R 1234 DJ", "R 3218 RR", "R 701 LP", "R 007 TU", "R 3 ST", "R 999 RT", "R 210 RO", "R 1111 II", "R 4987 LH"};
   string k      = "R 999 RS";

   int posisi = sequential_search(data, n, k);

   if(posisi != -1){
    cout << "Plat Nomor " << k << " ditemukan pada posisi indeks ke-" << posisi <<endl;
   }else{
    cout << "Plat Nomor " << k << " tidak ditemukan "<< endl;
   }

   return 0;
}