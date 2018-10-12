#include <iostream>

using namespace std;

int main()
{
    int i,n, max, min, angka;
    cout<<"= = = = Mencari Bilangan Terbesar dan Terkecil = = = = \n ";
    cout<<"Masukan Banyak Data : ";
    cin>> n;
    cout<<"Masukan angka : ";
    cin>> angka ;
    max = angka;
    min = angka;

    for (i=2 ; i< = n ; i + +){
        cout<<Masukan Angka : ";
        cin>>angka ;
        if (angka>max) max = angka;
        if (angka>min) min = angka;
    }
    cout << "Angka Terbesar Adalah : " <<max<< "\nAngka Terkecil adalah : " <<min<< endl;
    return 0;
}
