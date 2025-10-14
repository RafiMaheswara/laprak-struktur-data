#include "mahasiswa.h"
#include <iostream>
using namespace std;

int main(){
    mahasiswa mhs;
    inputMhs(mhs);
    cout << "rata - rata = " << rata2(mhs);
    return 0;
}

// untuk run nya ke terminal lalu ketik g++ .\main.cpp .\mahasiswa.cpp -o main.exe lalu enter
// setelah itu ketik lagi .\main.exe lalu enter
// buatnya itu di luar folder ini, jadi kalo copas harus beda folder
