#include <iostream>
using namespace std;

float Panjang, Lebar, Luas;
void InputData() {
    cout << "Masukkan Panjang: ";
    cin >> Panjang;
    cout << "Masukkan Lebar: ";
    cin >> Lebar;
}

float HitungLuas() {
    return Panjang * Lebar;
}

void OutputData() {
    cout << "Luas Persegi Panjang: " << HitungLuas() << endl;
}

    int main() {
        InputData();
        OutputData();
    }