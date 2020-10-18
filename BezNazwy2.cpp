#include <iostream>

using namespace std;

int main()
{
	//znajduje minimalna wartosc z tablicy
	cout << "podaj n" << endl;
	int n;
	cin >> n;
	int array[n];
	cout << "podaj " << n << " liczb" << endl;
	for(int i=0; i<n; i++)
	{
		cin >> array[i];
	}
	int minimum = 1000;
	for(int i=0; i<n; i++)
	{
		if(array[i] < minimum)
		{
			minimum = array[i];
		}
	}
	cout << minimum;
}


