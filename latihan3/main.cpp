#include <iostream>

using namespace std;

int main()
{
    int x, angka, bil, total = 0;
    cout<< "Masukan Jumlah Angka Yang Akan Di input = ";
    cin>> angka;
    for (x = 1 ; x<=angka;x + +)
    {
        cout<<"Masukan Angka ke " <<x<<"=" ;
        cin>>bil;
        total=total+bil;
        cout<<"\ntotal= "<<total;
    }
    return 0;
}
