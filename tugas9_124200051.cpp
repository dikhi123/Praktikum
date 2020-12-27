#include <iostream>

using namespace std;

int main ()
{
	int n=0, i, i_kur, max_2=0, max=0, min=0, sel[999]={0}, angka[n];
	float rata_2, rata = 0;

	cout<<"Masukan Banyak Angka : "; 
	cin >> n;
	
	for (i=0; i<n; i++)
	{
		cout<<"Angka ke-"<<i+1<<": ";
		cin >>angka[i];
	} 
	cout<<"\n";
	cout<<"---------HASIL---------"<<endl;
	cout<<"\n";
	cout<<"Deret\t\t: ";
	for (i=0; i<n; i++)
	cout<<angka[i]<<" ";
	cout<<"\n";
	
		//MAKSIMUM
	max = angka[0];
	for (i=0; i<n; i++)
	{
			if (max<angka[i])
		{
			max=angka[i];			
		}
		//MINIMUM
			else
			min=angka[0];
			if (min>angka[i])
		{ 
			min= angka[i];	
		}
	}

		//RATA-RATA
	for (i=0; i<n; i++)
	{rata=rata+angka[i];}
	rata_2=rata/n;

		//SELISIH MAX
	n=n-1;
	for (i=0; i<n; i++)
	{
		i_kur=i+1;

		if (i<n) sel[i] = angka[i] - angka[i_kur];
		else sel[i]=0;

		if 	(sel [i] < 0) sel[i] = sel[i] * (-1);

 		max_2 = sel[0];

    	if (sel[i] > max_2)
		{
			max_2=sel[i];
		}	
	}
	cout<<"Maksimum\t: "<<max<<endl;
	cout<<"Minimum\t\t: " <<min<<endl;
	cout<<"Rata-rata\t: "<<rata_2<<endl;
	cout<<"Selisih max\t: "<<max_2<<endl;
	return 0;
	
		
}
