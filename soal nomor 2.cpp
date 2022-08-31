#include <iostream>

using namespace std;

int main ()
{

	float p,l,t,r,tt,v;
	
	cout<<"MENGHITUNG VOLUME BAK DAN TANDON"<<endl;
	cout<<"================================"<<endl;
	cout<<"Masukkan panjang bak"<<endl;
	cin>>p;
	cout<<"Masukkan lebar bak"<<endl;
	cin>>l;
	cout<<"Masukkan tinggi bak"<<endl;
	cin>>t;
	cout<<"Masukkan jari-jari tandon"<<endl;
	cin>>r;
	cout<<"Masukkan tinggi tandon"<<endl;
	cin>>tt;
	v = p*l*t + 3.14*r*r*tt;
	cout<<"Jadi volume bak dan tandon adalah "<<v<<endl;
	
	return 0;
}
