# <h1 align="center">Laporan Praktikum Modul 1 Pengenalan C++ <br> Nama Modul</h1>
<p align="center">Rafi Maheswara - 103112400135</p>

## Dasar Teori

Dasar teori pemrograman C++ dimulai dari fondasinya sebagai bahasa yang kuat dan fleksibel yang digunakan untuk membangun berbagai platform aplikasi. C++ berfungsi sebagai jembatan yang mengajarkan struktur pemrograman fundamental, mulai dari cara mendeklarasikan Variabel dan Tipe Data, melakukan Basic Input/Output (I/O), hingga mengimplementasikan logika program melalui Struktur Percabangan (if, switch) dan Struktur Perulangan (for, while). Keunggulan utama C++ dibandingkan pendahulunya, bahasa C, adalah dukungannya terhadap Pemrograman Berorientasi Objek (OOP). Konsep OOP ini diperkenalkan melalui pengantar tentang Class, Inheritance (Pewarisan), dan Polymorphism (Polimorfisme), yang bertujuan untuk membuat kode menjadi lebih modular, mudah dikelola, dan efisien, sehingga sangat ideal sebagai materi pengenalan bagi programmer pemula.

## Guided

### soal 1 Test

```C++
#include <iostream>
using namespace std;
int main()
{
    string ch;
    cout << "Masukkan sebuah karakter: ";
    // cin >> ch;
    ch = getchar();  //Menggunakan getchar() untuk membaca satu karakter
    cout << "Karakter yang Anda masukkan adalah: " << ch << endl;
    return 0;
}
```
Program ini menggunakan getchar() untuk membaca satu karakter dari user, termasuk spasi dan whitespace yang tidak bisa dibaca oleh cin >>. Setelah membaca karakter, program menampilkannya kembali. Ada masalah tipe data karena getchar() return int tapi disimpan di variabel string.

### soal 2 Aritmatika

```C++
#include <iostream>
using namespace std;
int main()
{
    int W, X, Y;
    float Z;
    X = 7;
    Y = 3;
    W = 1;
    Z = (X + Y) / (Y + W);
    cout << "Nilai z = " << Z << endl;
    return 0;
}
```
Program ini menghitung Z = (7+3)/(3+1) = 10/4. Karena semua variabel dalam rumus bertipe integer, hasil pembagian akan menjadi 2 (bukan 2.5) meskipun Z bertipe float.

### soal 3 Kondisi

```C++

#include <iostream>
using namespace std;
// int main()
// {
//     double tot_pembelian, diskon;
//     cout << "total pembelian: Rp";
//     cin >> tot_pembelian;
//     diskon = 0;
//     if (tot_pembelian >= 100000)
//         diskon = 0.05 * tot_pembelian;
//     cout << "besar diskon = Rp" << diskon;
// }

// int main()
// {
//     double tot_pembelian, diskon;
//     cout << "total pembelian: Rp";
//     cin >> tot_pembelian;
//     diskon = 0;
//     if (tot_pembelian >= 100000)
//         diskon = 0.05 * tot_pembelian;
//     else
//         diskon = 0;
//     cout << "besar diskon = Rp" << diskon;
// }

int main()
{
    int kode_hari;
    cout << "Menentukan hari kerja/libur\n"<<endl;
    cout << "1=Senin 3=Rabu 5=Jumat 7=Minggu "<<endl;
    cout << "2=Selasa 4=Kamis 6=Sabtu "<<endl;
    cin >> kode_hari;
    switch (kode_hari)
    {
    case 1:
        cout<<"Hari Kerja";
        break;
    case 2:
        cout<<"Hari Kerja";
        break;
    case 3:
        cout<<"Hari Kerja";
        break;
    case 4:
        cout<<"Hari Kerja";
        break;
    case 5:
        cout<<"Hari Kerja";
        break;
    case 6:
        cout<<"Hari Libur";
        break;
    case 7:
        cout<<"Hari Libur";
        break;
    default:
        cout<<"Kode masukan salah!!!";
    }
    return 0;
}

```
Program ini berisi tiga contoh kode dengan dua bagian pertama yang di-comment dan satu bagian aktif. Bagian pertama dan kedua yang di-comment adalah program perhitungan diskon 5% untuk pembelian minimal Rp100.000, dengan perbedaan penambahan kondisi "else" pada versi kedua. Program ketiga yang aktif menggunakan struktur "switch-case" untuk menentukan status hari kerja atau libur berdasarkan input kode angka 1-7, dimana kode 1-5 menampilkan "Hari Kerja" (Senin-Jumat), kode 6-7 menampilkan "Hari Libur" (Sabtu-Minggu), dan input selain itu akan menampilkan pesan error

### soal 4 Fungsi

```C++

#include <iostream>
using namespace std;

// Prosedur: hanya menampilkan hasil, tidak mengembalikan nilai
void tampilkanHasil(double p, double l)
{
    cout << "\n=== Hasil Perhitungan ===" << endl;
    cout << "Panjang : " << p << endl;
    cout << "Lebar   : " << l << endl;
    cout << "Luas    : " << p * l << endl;
    cout << "Keliling: " << 2 * (p + l) << endl;
}

// Fungsi: mengembalikan nilai luas
double hitungLuas(double p, double l)
{
    return p * l;
}

// Fungsi: mengembalikan nilai keliling
double hitungKeliling(double p, double l)
{
    return 2 * (p + l);
}

int main()
{
    double panjang, lebar;

    cout << "Masukkan panjang: ";
    cin >> panjang;
    cout << "Masukkan lebar  : ";
    cin >> lebar;

    // Panggil fungsi
    double luas = hitungLuas(panjang, lebar);
    double keliling = hitungKeliling(panjang, lebar);

    cout << "\nDihitung dengan fungsi:" << endl;
    cout << "Luas      = " << luas << endl;
    cout << "Keliling  = " << keliling << endl;

    // Panggil prosedur
    tampilkanHasil(panjang, lebar);

    return 0;
}

```
Program ini mendemonstrasikan perbedaan antara fungsi dan prosedur dalam C++. Program memiliki dua fungsi (hitungLuas dan hitungKeliling) yang mengembalikan nilai, serta satu prosedur (tampilkanHasil) yang hanya menampilkan output tanpa return value. Program meminta input panjang dan lebar persegi panjang, kemudian menghitung luas dan keliling menggunakan fungsi, lalu menampilkan hasil dengan dua cara berbeda: melalui pemanggilan fungsi di main() dan melalui prosedur yang langsung mencetak semua hasil sekaligus.

### soal 5 Perulangan

```C++
#include <iostream>
using namespace std;
// int main()
// {
//     int jum;
//     cout << "jumlah perulangan: ";
//     cin >> jum;
//     for (int i = 0; i < jum; i++)
//     {
//         cout << "saya sahroni\n";
//     }
//     return 1;
// }

// while
int main()
{
    int i = 1;
    int jum;
    cin >> jum;
    do
    {
        cout << "bahlil ke-" << (i + 1) << endl;
        i++;
    } while (i < jum);
    return 0;
}
```
Program ini menunjukkan dua contoh perulangan berbeda dalam C++. Bagian pertama (yang di-comment) menggunakan loop for untuk mencetak "saya sahroni" sebanyak input yang dimasukkan user. Bagian kedua yang aktif menggunakan loop do-while yang mencetak "bahlil ke-" dengan nomor urut mulai dari 2, dimana loop akan terus berjalan selama nilai i kurang dari jumlah yang diinput. Perbedaan utamanya adalah for loop lebih compact untuk iterasi dengan counter, sedangkan do-while memastikan kode dieksekusi minimal satu kali sebelum pengecekan kondisi.

### soal 6 Struct

```C++
#include <iostream>
#include <string>
using namespace std;

// Definisi struct
struct Mahasiswa {
    string nama;
    string nim;
    float ipk;
};

int main() {

    Mahasiswa mhs1;

    cout << "Masukkan Nama Mahasiswa: ";
    getline(cin, mhs1.nama);
    // cin >> mhs1.nama;
    cout << "Masukkan NIM Mahasiswa : ";
    cin >> mhs1.nim;
    cout << "Masukkan IPK Mahasiswa : ";
    cin >> mhs1.ipk;

    cout << "\n=== Data Mahasiswa ===" << endl;
    cout << "Nama : " << mhs1.nama << endl;
    cout << "NIM  : " << mhs1.nim << endl;
    cout << "IPK  : " << mhs1.ipk << endl;

    return 0;
}
```
Program ini menggunakan struct Mahasiswa untuk menyimpan data nama, NIM, dan IPK. Program membuat objek mhs1, meminta input data menggunakan getline() untuk nama dan cin untuk NIM/IPK, kemudian menampilkan kembali semua data yang tersimpan dalam struct.


## Unguided

### Soal 1

Buatlah program yang menerima input-an dua buah bilangan bertipe float, kemudian memberikan output-an hasil penjumlahan, pengurangan, perkalian, dan pembagian dari dua bilangan tersebut.

```C++
#include <iostream>
using namespace std;

int main() {
    float a, b;
    
    cout << "Masukkan dua angka: ";
    cin >> a >> b;
    
    cout << "\nHasil:" << endl;
    cout << a << " + " << b << " = " << a + b << endl;
    cout << a << " - " << b << " = " << a - b << endl;
    cout << a << " * " << b << " = " << a * b << endl;
    
    if (b != 0)
        cout << a << " / " << b << " = " << a / b << endl;
    else
        cout << a << " / " << b << " = Error (bagi nol)" << endl;
    
    return 0;
}
```

> Output
> ![Screenshot bagian x](output/Screenshot_soal1.png)

Program kalkulator sederhana yang meminta dua input angka float, kemudian menampilkan hasil operasi penjumlahan, pengurangan, perkalian, dan pembagian. Program menggunakan pengecekan kondisi untuk pembagian agar tidak terjadi error saat membagi dengan nol, dan menampilkan pesan "Error (bagi nol)" jika pembagi adalah nol

### Soal 2

Buatlah sebuah program yang menerima masukan angka dan mengeluarkan angak tersebut dalam bentuk tulisan. Angka yang diinput user adalah positif mulai dari 0 s.d 100

```C++
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Input angka (0-100): ";
    cin >> n;
    
    string kata[] = {"nol", "satu", "dua", "tiga", "empat", "lima", "enam", "tujuh", "delapan", "sembilan"};
    
    if (n == 0) cout << "nol";
    else if (n < 10) cout << kata[n];
    else if (n == 10) cout << "sepuluh";
    else if (n == 11) cout << "sebelas";
    else if (n < 20) cout << kata[n-10] << " belas";
    else if (n == 100) cout << "seratus";
    else if (n < 100) {
        int satuan = n - (n/10)*10;
        cout << kata[n/10] << " puluh" << (satuan ? " " + kata[satuan] : "");
    }
    else cout << "Input tidak valid!";
    
    cout << endl;
    return 0;
}
```

> Output
> ![Screenshot bagian x](output/Screenshot_soal2.png)

Program konversi angka ke kata dalam bahasa Indonesia untuk range 0-100. Program menggunakan array kata[] untuk menyimpan nama angka 0-9, kemudian menggunakan kondisi if-else bertingkat untuk menangani berbagai kasus: angka satuan, belasan (10-19), puluhan (20-99), dan seratus. Untuk angka puluhan, program menghitung digit satuan tanpa operator modulus menggunakan rumus n - (n/10)*10

### soal 3

Buatlah program yang dapat memberikan input dan output seperti segitiga dengan angka


```C++
#include <iostream>
using namespace std;

int main() {
    int n;
    
    cout << "Input: ";
    cin >> n;
    
    cout << "Output:" << endl;
    
    for (int i = n; i >= 1; i--) {
        for (int s = 0; s < n - i; s++) {
            cout << " ";
        }
        
        for (int j = i; j >= 1; j--) {
            cout << j;
        }
        
        cout << "*";
        
        for (int j = 1; j <= i; j++) {
            cout << j;
        }
        
        cout << endl;
    }
    
    for (int s = 0; s < n; s++) {
        cout << " ";
    }
    cout << "*" << endl;
    
    return 0;
}

```

> Output
> ![Screenshot bagian x](output/Screenshot_soal3.png)

Program ini membuat pola piramida terbalik dari angka dan simbol bintang. Program minta input satu angka, lalu buat pola yang semakin mengecil ke bawah dimana setiap baris berisi spasi di awal, angka menurun, bintang di tengah, dan angka naik. Setiap baris memiliki lebih sedikit angka dari baris sebelumnya hingga membentuk piramida terbalik, dengan satu bintang di bagian bawah sebagai ujung piramida

## Referensi

1. Al Fatta, H. (2006). Dasar Pemrograman C++ Disertai dengan Pengenalan Pemrograman Berorientasi Objek. Penerbit Andi.
2. Nugraha, M. (2021). Dasar Pemrograman Dengan C++ Materi Paling Dasar Untuk Menjadi Programmer Berbagai Platform. Deepublish.
3. Trianiza, I., Khirdany, E. N., Wahyudi, E., Vandika, A. Y., & Sofyan, S. (2025). Pengenalan Pemrograman Dasar Dunia Koding dengan C++. YPAD Penerbit.
