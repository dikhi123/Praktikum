#include <iostream>
#include <iomanip>

using namespace std;

void L_ling();
void Kel_ling();
void V_tab();
void menu();

float r,t,k,l,v;
int pilih;
char ulang;

int main ()

{
	cout<<"============================"<<endl;
	cout<<"  TUGAS PRAKTIKUM ALGORITMA "<<endl;
	cout<<"      Dikhi Dewantoro "<<endl;
	cout<<"         124200051 "<<endl;
	cout<<"     SISTEM INFORMASI B "<<endl;
	cout<<"============================"<<endl;
	cout<<""<<endl;

	cout<<"======================="<<endl;
	cout<<"hitung Luas Lingkaran"<<endl;
	cout<<"1. Luas Lingkaran"<<endl;
	cout<<"2. Keliling lingkaran"<<endl;
	cout<<"3. Volume Tabung"<<endl;
	cout<<"======================="<<endl;
	cout<<"Pilih : ";
	cin >> pilih;

	switch (pilih)
	{
		case 1:
		L_ling();
	break;
		
		case 2:
		Kel_ling();
	break;
		case 3:
		V_tab();
	break;
	}
	return 0;
}

		void L_ling()
		{
			cout<<"Jari-Jari : ";
			cin >>r;
			l=3.14*r*r;
			cout<<"Luas Lingkaran adalah : "<<l;
			menu();
		}
		
		void Kel_ling()
		{
			cout<<"Jari-Jari : ";
			cin >> r;
			k= 2*3.14*r;
			cout<<"Keliling lingkaran adalah : "<<k;
			menu();
		}

		void V_tab()
		{
			cout<<"Jari-Jari : ";
			cin >>r;
			cout<<"Tinggi tabung : ";
			cin >>t;
			v= 3.14*t*r*r;
			cout<<"Volume Tabung adalah : "<<v;
			menu();
		}

		void menu()
		{
			cout<<endl;
			cout<<"Ulangi Program (y/n)";
			cin >>ulang;
			if (ulang=='y')
			main();
		}
	


