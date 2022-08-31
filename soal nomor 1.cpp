#include <iostream>
using namespace std;
int main()
{
cout<<"==================================n";
cout<<" Program Perhitungan Volume Balok n";
cout<<"==================================n";
cout<<endl;

//Deklarasi Variabel
float panjang, lebar, tinggi;
float volume_balok;

//Input
cout<<" Masukkan Nilai Panjang = "; cin>>panjang;
cout<<" Masukkan Nilai Lebar = "; cin>>lebar;
cout<<" Masukkan Nilai Tinggi = "; cin>>tinggi;

//Proses
volume_balok= panjang*lebar*tinggi;

//output
cout<<"----------------------------------n";
cout<<" Volume Balok adalah = "<<volume_balok<<endl;
cout<<"----------------------------------n";
}
