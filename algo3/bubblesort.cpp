#include <iostream>
using namespace std;

int arr [10];// variable public array
int nData;

void inputData()
{
while (true)
{
    cout << "Masukkan jumlah data= ";
    cin >> nData;

    if (nData < 10)
    {
        break;
    }
    else
    {
        cout << "Jumlah data maksimal 10" << endl;
    }
}

cout << "=============" << endl;
cout << "Masukan Data" << endl;
cout << "=============" << endl;
cout << endl;

for (int i = 0; i < nData; i++)
{
    cout << "Input data ke-" << i + 1 << "=";
    cin >> arr[i];
}

}

void bubleSort(){
    int pass = 1; // step 1

    do
    {
        for (int j = 0; j <= nData - 1 - pass; j++)
    { // step 2
        if (arr [j] > arr[j + 1]) // step 3
        {
            int temp;
            temp = arr[j];
            arr[j]= arr[j + 1];
            arr[j + 1] = temp;
        }
    }
    
    pass = pass + 1; // step 4
    } while (pass <= nData - 1);
    
}

void tampilData(){
    cout << "Tampil Data" << endl;
    cout << endl;

    for (int i = 0; i < nData; i++)
    {
        cout << "Data ke -" << i + 1 << "=" << arr[i]<<
        endl;
    }
    
}

int main()
{
inputData();
bubleSort();
tampilData();
return 0;

}