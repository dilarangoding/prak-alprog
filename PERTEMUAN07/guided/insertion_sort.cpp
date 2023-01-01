#include <iostream>

using namespace std;

void insertion_sort(int arr[], int length){
    int i,j, temp;

    for(i = i; i < length; i++){
        j = i;

        while( j > 0 && arr[j - 1 ] > arr[j]){
            temp = arr[j];
            arr[j] =arr[j - 1];
            arr[j - 1] =temp;
            j--;
        }

    }
}

void print_array(int a[], int length){
    for(int i = 0; i < length; i++){
        cout << a[i] <<"\t";
    }

    cout << endl;
}

int main(){
    int length =6;
    int a[length] = {22, 10, 15, 3, 8 , 2};

    insertion_sort(a, length);
    print_array(a, length);
}
