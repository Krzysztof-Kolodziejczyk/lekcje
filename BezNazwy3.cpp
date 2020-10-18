#include <iostream>

using namespace std;

int main()
{
	//ile razy najwieksza liczba wystapila w tablicy
	int n;
	cout << "podaj n" << endl;
	cin >> n;
	int array[n];
	for(int i=0; i<n; i++)
	{
		cout << "podaj liczbe ";
		cin >> array[i];
	}
	int max = -1000;
	for(int i=0; i<n; i++)
	{
		if(array[i] > max)
		{
			max = array[i];
		}
		//cout << max << endl;
	}
	int licz = 0;
	for(int i=0; i<n; i++)
	{
		if(array[i] == max)
		{
			licz ++;
		}
	}
	cout << "najwieksza liczba wystapila " << licz << " razy";
}
