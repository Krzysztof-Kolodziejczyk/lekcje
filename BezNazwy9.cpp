#include <iostream>

using namespace std;

int main()
// jezeli liczba wystepuje w przedziale od 4 do 15 to ja wypisujemy
{
	int n;
	cout << "podaj n ";
	cin >> n;
	int array[n];
	for(int i=0; i<n; i++)
	{
		cin >> array[i];
	}
	for(int i=0; i<n; i++)
	{
		if(array[i]>4 && array[i]<15)
		{
			cout << array[i];
		}
	}
}
