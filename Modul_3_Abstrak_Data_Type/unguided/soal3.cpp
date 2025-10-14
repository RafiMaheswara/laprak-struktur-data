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