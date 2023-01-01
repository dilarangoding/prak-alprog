#include <iostream>

using namespace std;

void ascending(char arr[], int length){
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

void descending(char arr[], int length){
    int i, j;
    char tmp;

    for (int i = 1; i < length; i++)
    {
        j = i;

        while(j > 0 && arr[j - 1] < arr[j]){
            tmp = arr[j];
            arr[j] = arr[j-1];
            arr[j - 1] = tmp;
            j--;
        }
    }

}


void print_array(char a[], int length){
    for(int i = 0; i < length; i++){
        cout << a[i] <<"\t";
    }
    cout << endl;
}

int main(){

    int length;
    char karakter, a[length] = {};

    cout << "Input <n> : ";
    cin  >> length;

    for(int i = 0; i < length; i++){
        cout << "Karakter ke-" << i+1 << ":";
        cin  >> karakter;
        a[i] = karakter;
    }

    cout << "Urutuan karakter sebelum disorting:"<< endl;
    print_array(a, length);
    ascending(a, length);

    cout << "\nUrutuan array setelah ascending sort:" << endl;
    print_array(a,length);
    descending(a, length);

    cout << "\nUrutuan array setelah descending sort:" << endl;
    print_array(a,length);

}
