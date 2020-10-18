#include <iostream>

using namespace std;

int main()
// jezeli liczba jest parzysta to dodajemy do niej sto
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
		if(array[i]%2==0)
		{
			cout << array[i]+100;
		}
	}
}
