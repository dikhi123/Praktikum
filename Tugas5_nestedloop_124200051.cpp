#include <iostream>


using namespace std;

int main ()

{
	int pilih;
	
	cout<< "Gambar Bangun Datar" <<endl;
	cout<< "===================" <<endl;
	cout<< "|1. Balok Bolong  |" <<endl;
	cout<< "|2. Segitiga      |" <<endl;
	cout<< "===================" <<endl;
	cout<< "Pilih : ";		
	cin>> pilih;
	cout<<"\n\n";
	
		switch (pilih)
	{
		case 1 :
		
		int p,l;
		cout<< "==============" <<endl;
		cout<< "|Balok Bolong|" <<endl;
		cout<< "==============" <<endl;
		cout<< "Masukan Panjang : "; 
		cin>> p;
		cout<< "Masukan Lebar   : "; 
		cin>> l;
		
			for (int j= 1; j<= l; j++)
			{
				for (int i= 1; i<= p; i++)
				{
			
				if (i== 1 || i== p || j== 1 || j== l)
					{cout << " *" ;}
				else 
					{cout << "  " ;}
				}
			cout<< " "<<endl;
			}
	
	break;
		
		case 2 :
			
		int a,b,t,bil;
		cout<<"=========="<<endl;
		cout<<"|Segitiga|"<<endl;
		cout<<"=========="<<endl;
		cout<<"Masukan Tinggi : "; 
		cin>>t;
			for( a=1; a<=t; a++ )
			{
				bil = a;
					for ( b=1; b<=a; b++)
					{
					cout<<" "<<bil;
					bil = bil+t-b;
					}
				cout<<"\n";
			}
		break;
		
	
	}
				
}
	
	

