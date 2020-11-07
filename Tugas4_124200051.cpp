#include <iostream>
#include <iomanip>
using namespace std;

main ()
{
	int m, n, pilih, kali, pangkat, total;
	
	cout << "============================"<<endl;
	cout << "PERKALIAN DAN PERPANGKATAN"<<endl;
	cout << "============================"<<endl;
	cout << "|1.Perkalian				"<<endl;
	cout << "|2.Perpangkatan			"<<endl;
	cout << "============================"<<endl;
	cout << "Pilih : ";
	cin  >> pilih;
	cout << "\n\n";
	
	switch (pilih)
	{	
	case 1 :
		
		cout<< "Masukan Nilai M = ";
		cin >> m;
		cout<< "Masukan Nilai N = ";
		cin >> n;
		cout<< "\n\n";
			kali = 0;
			for (int loop = 1; loop <= n; loop++)
			{
				kali += m;
					if (loop != n)
					{cout << m << " + ";}
					else
					{cout << m << " = "<<kali;}		
			}
	break;
	case 2 :
		cout<< "Masukan Nilai M = ";
		cin >> m;
		cout<< "Masukan Nilai N = ";
		cin >> n;
		cout<< "\n\n";
			cout <<"\nhasil" << " " << m << " ^ " << n << endl;
			pangkat = 1;
			for (int loop = 1; loop <= n; loop++)
			{
				pangkat *= n;
					if (loop != n)
					{cout << m << " X ";}
					else
					{cout << setprecision(999999) << m << " = "<<pangkat;}		
			}
			
	break;
	default :
		cout << ("input salah !\n");
		
	}	
		
}
