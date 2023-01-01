#include <iostream>

using namespace std;

void bubble_sort(string arr[], int length){
    for( int i = 1; i < length; i++){


        for(int j = 0; j < length - 1; j++){
            if(arr[j] > arr[j + 1]){
                string temp;
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }

    }
}

void print_array(string name[], int length){
        for(int i=0; i<length; i++) {
            cout << name[i] << "\t";
         }
        cout << endl;
}

int main(){

    int length = 10;
    string name[length] = {"siti", "situ", "sana", "ana", "ani", "caca", "cici", "dida", "dodo","dadi" };

    cout << endl;
    cout << "Hasil : ";
    bubble_sort(name, length);
    print_array(name, length);
    cout << endl;

}
