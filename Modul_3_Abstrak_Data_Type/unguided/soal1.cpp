#include <iostream>
using namespace std;

struct Mahasiswa {
    string nama;
    string nim;
    float uts, uas, tugas, nilaiAkhir;
};

int main() {
    Mahasiswa mhs[10];
    int n;
    
    cout << "Masukkan jumlah mahasiswa (max 10): ";
    cin >> n;
    
    if (n > 10) n = 10;
    
    for (int i = 0; i < n; i++) {
        cout << "\nMahasiswa ke-" << (i+1) << endl;
        cout << "Nama: ";
        cin.ignore();
        getline(cin, mhs[i].nama);
        cout << "NIM: ";
        cin >> mhs[i].nim;
        cout << "UTS: ";
        cin >> mhs[i].uts;
        cout << "UAS: ";
        cin >> mhs[i].uas;
        cout << "Tugas: ";
        cin >> mhs[i].tugas;
      
        mhs[i].nilaiAkhir = 0.3*mhs[i].uts + 0.4*mhs[i].uas + 0.3*mhs[i].tugas;
    }
    
    cout << "\n=== DATA MAHASISWA ===" << endl;
    for (int i = 0; i < n; i++) {
        cout << "\nMahasiswa " << (i+1) << endl;
        cout << "Nama: " << mhs[i].nama << endl;
        cout << "NIM: " << mhs[i].nim << endl;
        cout << "UTS: " << mhs[i].uts << endl;
        cout << "UAS: " << mhs[i].uas << endl;
        cout << "Tugas: " << mhs[i].tugas << endl;
        cout << "Nilai Akhir: " << mhs[i].nilaiAkhir << endl;
    }
    
    return 0;
}