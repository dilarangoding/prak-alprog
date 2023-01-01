#include <iostream>

using namespace std;

void selection_sort(double arr[], int length){
    int pos_min, temp;
    for(int i = 0; i < length - 1; i++){
        pos_min = i;

        for(int j = i + 1; j < length; j++){
            if(arr[j] > arr[pos_min]){
                pos_min = j;
            }
        }

        if(pos_min != i){
            temp = arr[i];
            arr[i] = arr[pos_min];
            arr[pos_min] = temp;
        }

    }
}

void print_array(double a[], int length){
    for(int i = 0; i < length; i++){
        cout << a[i] <<"\t";
    }
    cout << endl;
}


int main(){
    int length = 5;
    double ips[] ={3.8, 2.9, 3.3, 4.0, 2.4};
    cout << endl;
    cout << "Hasil sorting menggunakan selection sort : ";
    selection_sort(ips, length);
    print_array(ips, length);
    cout << endl;

}
