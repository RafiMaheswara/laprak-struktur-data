#include <iostream>
using namespace std;

void kuadratkan(int &angka)
{
    angka = angka * angka;
}

int main(){

    int nilai;
    cout << "Masukkan Nilai = ";
    cin >> nilai;
    cout << "Nilai awal: " << nilai << endl;
    kuadratkan(nilai);
    cout << "Nilai setelah dikuadratkan: " << nilai << endl;
    return 0;
}