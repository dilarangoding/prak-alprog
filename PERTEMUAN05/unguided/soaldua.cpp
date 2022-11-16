#include <iostream>

using namespace std;

int arr[10];

void Input(){
    int bil;
    for(int i =0; i<10; i++){
        cout << "Masukan bilangan bulat ke-"<< i+1 << " : ";
        cin  >> bil;
        arr[i] = bil;
    }
}

void Ouput(){
    for(int i=0; i<10; i++){
        cout << arr[i] <<endl;
    }
}

void Minimum(){
   
    int min = arr[0];
    for(int i = 0; i < 10; i++){
        if( arr[i] < min){
            min = arr[i];
        }
    }
    cout << "Nilai minimum: "<< min <<endl<<endl;
}

void Maksimum(){
    int maks = 0;
    for(int i = 0; i < 10; i++){
        if(arr[i] > maks){
            maks = arr[i];
        }
    }
    cout << "Nilai maksimum: "<< maks <<endl<<endl;
}

void Average(){
    float average, sum=0.0;
    
    for(int i= 0; i < 10; i++ ){
        sum += arr[i];
    }

    average = sum / 10;
    cout << "Rata - Rata : " << average <<endl<<endl;

}

int main(){

   do{
     int menu;

    cout << "---------- Menu --------------"<<endl;
    cout << "1. Input Array "<<endl;
    cout << "2. Tampil Array"<<endl;
    cout << "3. Cari Nilai Minimum"<<endl;
    cout << "4. Cari Nilai Maksimum"<<endl;
    cout << "5. Hitung Rata-rata"<<endl;
    cout << "6. Exit"<<endl;
    cout << "Masukan pilihan :";
    cin  >> menu;

    switch (menu){
    case 1:
        Input();
        break;
    case 2:
        Ouput();
        break;
    case 3:
        Minimum();
        break;
    case 4:
        Maksimum();
        break;
    case 5: 
        Average();
        break;
    case 6:
        return false;
        break;
    default:
        return false;
        break;
    }

   }while(true);

    return 0;
}