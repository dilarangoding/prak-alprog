#include <iostream>

using namespace std;

int main(){

    int TabInt[10],i; 

    for (i = 0; i < 10; i++)
    {
       TabInt[i] = i * 10;
    }

    for(i = 0; i<10; i++){
        cout << TabInt[i]<<endl;
    }

    return 0;
}