#include <iostream>

using namespace std;

int main()
// kazda liczba w ciagu podniesiona do kwadratu
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
		array[i]=array[i]*array[i];
	}
	for(int i=0; i<n; i++)
	{
		cout << array[i] << " ";
	}
}
