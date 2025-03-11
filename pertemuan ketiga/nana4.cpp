#include <iostream>
using namespace std;

float HitungRerataBerparameter(float x, float y){
    return (x + y) / 2;
}

string CekStatusBerparameter(float a){
    if (a >= 60){
        return "Lulus";
    }
    else{
        return "Tidak Lulus";
    }
}

int main()
{
    float Ujian1, Ujian2;

    cout << "Masukkan Nilai Ujian 1 : ";
    cin >> Ujian1;
    cout << "Masukkan Nilai Ujian 2 : ";
    cin >> Ujian2;

    cout<< "Status Kelulusan : "
    << CekStatusBerparameter(HitungRerataBerparameter(Ujian1, Ujian2));
}