# <h1 align="center">Laporan Praktikum Modul 3 <br> Abstrak Data Type</h1>
<p align="center">Rafi Maheswara - 103112400135</p>

## Dasar Teori

Abstrak Data Type (ADT) adalah model matematika yang mendefinisikan suatu tipe data berdasarkan perilaku dari sudut pandang pengguna, bukan berdasarkan implementasi internalnya. Singkatnya, ADT adalah spesifikasi dari sekumpulan data dan sekumpulan operasi yang dapat dilakukan pada data tersebut.

## Guided

### soal 1 Array

#### mahasiswa.h
```C++
#ifndef MAHASISWA_H_INCLUDE
#define MAHASISWA_H_INCLUDE
struct mahasiswa
{
    char nim[10];
    int nilai1, nilai2;

};
void inputMhs(mahasiswa &m);
float rata2(mahasiswa m);
#endif
```
#### mahasiswa.cpp
```C++
#include "mahasiswa.h"
#include <iostream>
using namespace std;

void inputMhs(mahasiswa &m){
    cout << "input nama = ";
    cin >> (m).nim;
    cout << "input nilai1 = ";
    cin >> (m).nilai1;
    cout << "input niali2 = ";
    cin >> (m).nilai2; 
}
float rata2(mahasiswa m) {
    return float(m.nilai1 + m.nilai2) / 2;
    
}
```
#### main.cpp
```C++
#include "mahasiswa.h"
#include <iostream>
using namespace std;

int main(){
    mahasiswa mhs;
    inputMhs(mhs);
    cout << "rata - rata = " << rata2(mhs);
    return 0;
}
```
> ![Screenshot soal 1](output/screenshot_guided1.png)

Program ini melakukan perhitungan rata rata nilai pada mahasiswa. Untuk program mahasiswa.h itu untuk mendeklarasikan tipe data setiap variabel. Lalu mahasiswa.cpp untuk meng input nama mahasiswa, nilai 1, nilai 2, dan meng kalkulasikan nilai 1 ditambah nilai 2 lalu di bagi 2. main.cpp itu untuk mengeluarkan output rata rata dari inputan tadi.

## Unguided

### Soal 1

Buat program yang dapat menyimpan data mahasiswa (max. 10) ke dalam sebuah array dengan field nama, nim, uts, uas, tugas, dan nilai akhir. Nilai akhir diperoleh dari FUNGSI dengan rumus 0.3*uts+0.4*uas+0.3*tugas. 

```C++
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
```

> Output
> ![Screenshot soal 1](output/screenshot_soal1.png)

Program ini adalah sistem pencatatan nilai mahasiswa menggunakan struct untuk menyimpan data nama, NIM, dan nilai-nilai. Program meminta user menginput jumlah mahasiswa (maksimal 10), kemudian melakukan looping untuk mengisi data setiap mahasiswa termasuk nama, NIM, nilai UTS, UAS, dan tugas. Setelah data diinput, program secara otomatis menghitung nilai akhir dengan rumus 30% UTS + 40% UAS + 30% tugas. Terakhir, program menampilkan semua data mahasiswa beserta nilai akhir mereka dalam format yang rapi. Fungsi cin.ignore() digunakan untuk membersihkan buffer sebelum membaca input nama agar tidak terjadi error.

### Soal 2

> ![Screenshot soal 2](soal/soal2.png)

#### pelajaran.h

```C++
#ifndef PELAJARAN_H
#define PELAJARAN_H

#include <string>
using namespace std;

struct pelajaran {
    string namapel;
    string kodepel;
};

pelajaran create_pelajaran(string namapel, string kodepel);

void tampil_pelajaran(pelajaran pel);

#endif
```
#### pelajaran.cpp

```C++
#include <iostream>
#include "pelajaran.h"
using namespace std;

pelajaran create_pelajaran(string namapel, string kodepel) {
    pelajaran pel;
    pel.namapel = namapel;
    pel.kodepel = kodepel;
    return pel;
}

void tampil_pelajaran(pelajaran pel) {
    cout << "nama pelajaran : " << pel.namapel << endl;
    cout << "nilai : " << pel.kodepel << endl;
}
```
#### main.cpp

```C++
#include <iostream>
#include "pelajaran.h"
using namespace std;

int main() {
    string namapel = "Struktur Data";
    string kodepel = "STD";
    
    pelajaran pel = create_pelajaran(namapel, kodepel);
    tampil_pelajaran(pel);
    
    return 0;
}
```

> Output
> ![Screenshot soal 2](output/screenshot_soal2.png)

Ketiga file tersebut membentuk program C++ modular yang mengelola data pelajaran: (pelajaran.h) adalah header file yang mendefinisikan struct pelajaran dengan atribut namapel dan kodepel, serta mendeklarasikan fungsi create_pelajaran dan tampil_pelajaran. (pelajaran.cpp) mengimplementasikan kedua fungsi tersebut, di mana create_pelajaran() membuat objek pelajaran dengan data yang diberikan dan tampil_pelajaran() menampilkan informasi pelajaran ke layar. (main.cpp) adalah program utama yang membuat objek pelajaran "Struktur Data" dengan kode "STD" menggunakan fungsi-fungsi tersebut, kemudian menampilkan hasilnya ke layar, menghasilkan output yang menunjukkan nama dan kode pelajaran.

### Soal 3

> ![Screenshot soal 2](soal/soal3.png)

```C++
#include <iostream>
using namespace std;

void tampilArray(int arr[][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

void tukarArray(int arr1[][3], int arr2[][3], int baris, int kolom) {
    int temp = arr1[baris][kolom];
    arr1[baris][kolom] = arr2[baris][kolom];
    arr2[baris][kolom] = temp;
}

void tukarPointer(int* p1, int* p2) {
    int temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}

int main() {
    int arr1[3][3] = {{1,2,3}, {4,5,6}, {7,8,9}};
    int arr2[3][3] = {{10,20,30}, {40,50,60}, {70,80,90}};
    
    int a = 100, b = 200;
    int *ptr1 = &a, *ptr2 = &b;
    
    cout << "Array 1:\n";
    tampilArray(arr1);
    cout << "\nArray 2:\n";
    tampilArray(arr2);
    
    tukarArray(arr1, arr2, 0, 0);
    cout << "\nSetelah tukar posisi [0][0]:\n";
    cout << "Array 1:\n";
    tampilArray(arr1);
    cout << "\nArray 2:\n";
    tampilArray(arr2);
    
    cout << "\nSebelum tukar: ptr1=" << *ptr1 << ", ptr2=" << *ptr2 << endl;
    tukarPointer(ptr1, ptr2);
    cout << "Setelah tukar: ptr1=" << *ptr1 << ", ptr2=" << *ptr2 << endl;
    
    return 0;
}
```

> Output
> ![Screenshot soal 3](output/screenshot_soal3.png)

Program ini menukar elemen array 2D dan nilai pointer: pertama menampilkan arr1 (1-9) dan arr2 (10-90), lalu menukar posisi [0][0] sehingga arr1[0][0] berubah menjadi 10 dan arr2[0][0] menjadi 1 (elemen lainnya tetap), kemudian menukar nilai pointer ptr1 dan ptr2 sehingga ptr1 yang tadinya 100 menjadi 200, dan ptr2 yang tadinya 200 menjadi 100.
## Referensi

1. Dinata, R. K., & Hasdyna, N. (2025). Algoritma dan Pemrograman: Konsep Dasar, Logika, dan Implementasi dengan C++ & Python. Serasi Media Teknologi. https://books.google.com/books?hl=id&lr=&id=6kBlEQAAQBAJ&oi=fnd&pg=PA1&dq=bahasa+pemrograman+c%2B%2B+array&ots=bk_HI3xSBN&sig=1Hpd0ZgsybwRJiWdhlV3mCEAe6w
2. Guntara, R. G. (2023). ALGORITMA DAN PEMROGRAMAN DASAR: Menggunakan Bahasa Pemrograman C++ dengan Contoh Kasus Aplikasi untuk Bisnis dan Manajemen. CV. Ruang Tentor. https://books.google.com/books?hl=id&lr=&id=NO_LEAAAQBAJ&oi=fnd&pg=PP1&dq=bahasa+pemrograman+c%2B%2B+array&ots=2Fy9t5bo-6&sig=IEpObWmOGnSM-_hcwcGMRc3y-2A
3. Anita Sindar, R. M. S. (2019). Struktur Data Dan Algoritma Dengan C++ (Vol. 1). CV. AA. RIZKY. https://books.google.com/books?hl=id&lr=&id=GP_ADwAAQBAJ&oi=fnd&pg=PA23&dq=bahasa+pemrograman+c%2B%2B+pointer&ots=86j8Vl4PeN&sig=Y8PH3MxqztsFCr6HnjJIKfS--ow
