#include <iostream>

using namespace std;

int main()
{
	// ilosc wystapien drugiego co do wielkosci wyrazenia
	cout << "podaj ilosc wyrazow ";
	int n;
	cin >> n;
	int array[n];
	for(int i=0; i<n; i++)
	{
		cin >> array[i];
	}
	int max=-1000;
	for(int i=0; i<n; i++)
	{
		if(array[i]>max)
		{
			max=array[i];
		}
	}
	cout << "max = " << max << endl;
	int max2=-1000;
	for(int i=0; i<n; i++)
	{
		if(array[i]>max2 && array[i]!=max)
		{
			max2=array[i];
		
		}
	}
	cout << "max2 = " << max2 << endl;
	int licz=0;
	for(int i=0; i<n; i++)
	{
		if(array[i]==max2)
		{
			licz++;
			
		}
		
	}
	cout << "drugi co do wielkosci wyraz w ciagu wystapil " << licz << " razy";	

}

