#include <iostream>
using namespace std;

class angka{
private:
    int *arr;
    int panjang;
public:
    angka(int);     //construktor
    ~angka();       //destructor
    void cetakData();
    void isiData();
};

angka::angka(int i) {
    panjang = i;
    arr = new int[i];
    isiData();
}

angka::~angka(){    //destruktor
    cout << endl;
    cetakData();
    delete[]arr;
    cout << "Alamat Array Sudah Dilepaskan" << endl;
}

void angka::cetakData(){
    for(int i=1;i<=panjang;i++){
        cout << i << "="<<arr[i]<<endl;
    }    
}

void angka::isiData(){
    for(int i=1;i<=panjang;i++){
        cout <<i<<" = ";
        cin>>arr[i];
    }
    cout<<endl;
}

int main(){
    angka belajarcpp(3);                    //Construktor Dipanggil
    angka *ptrBelajarcpp = new angka(5);    //Construktor Dipanggil
    delete ptrBelajarcpp;                   //Destructor Dipanggil

    return 0;
}//Destruktor Dipanggil