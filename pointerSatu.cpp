#include <iostream>
using namespace std;
class mahasiswa{
    public:
    int nim;
    void showNim(){
        cout <<"No Induk = "<<nim<<endl;
    }
};

int main (){
    mahasiswa mhs{1}; // Object mhs
    mhs.showNim(); //member acces opertor

    mahasiswa &refMhs = mhs; // pointer reference refMhs
    refMhs.nim = 2; // member acces operatoe
    mhs.showNim();

    mahasiswa *pMhs = &mhs; // pointer deference pMhs
    pMhs->nim = 3; //arrow operator
    pMhs->showNim();
}