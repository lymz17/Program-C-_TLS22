#include <iostream>
using namespace std;
int main () {
    cout<<"===============================\n";
    cout<<"PENGHITUNG HARGA HASIL DISKON\n";
    cout<<"===============================\n";

    long harga,hasil;
    double diskon;

    cout<<"Masukan nilai harga:     ";cin>>harga;
    cout<<"Masukan nilai diskon:    ";cin>>diskon;

    hasil=harga-(harga*(diskon/100));  
    
    
    cout<<"Harga setlah diberi diskon:              "<<hasil;



    return 0;
} 
