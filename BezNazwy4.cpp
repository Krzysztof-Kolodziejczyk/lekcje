#include <iostream>

using namespace std;

int main()
{
	//druga co do wielkosci wartosc w tablicy
	int n;
	cout << "podaj n ";
	cin >> n;	
	int array[n];
	for(int i=0; i<n; i++)
	{
		cout << "podaj liczbe  ";
		cin >> array[i];
	}
	int max = -1000;
	for(int i=0; i<n; i++)
	{
		if(array[i] > max)
		{
			max = array[i];	
		}
		
	}
	cout << max;
	int max2 = -10000;
	for(int i=0; i<n; i++)
	{
		if(array[i] > max2 && array[i] != max)
		{
			max2 = array[i];
		}
	}
	cout << endl << max2;
}
