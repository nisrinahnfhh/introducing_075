#include <iostream>
using namespace std;

float Luas, Panjang, Lebar;
void ProsedurHitungLuas(){
    Luas = Panjang * Lebar;
}
void ProsedurInputData(){
    cout << "Masukkan panjangnya : ";
    cin >> Panjang;
    cout << "Masukkan lebarnya : ";
    cin >> Lebar;
}
void ProsedurOutputData(){
    cout << "Luas Persegi Panjang : " << Luas;
}

int main()
{
    ProsedurInputData();
    ProsedurHitungLuas();
    ProsedurOutputData();
}
