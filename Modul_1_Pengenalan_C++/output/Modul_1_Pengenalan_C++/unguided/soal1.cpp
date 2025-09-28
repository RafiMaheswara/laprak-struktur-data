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