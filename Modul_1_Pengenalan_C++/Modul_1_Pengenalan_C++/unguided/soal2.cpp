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