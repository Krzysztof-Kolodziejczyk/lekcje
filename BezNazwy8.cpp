#include <iostream>

using namespace std;

int main()
//jezeli liczba dzieli sie przez 3 to ja wypisujemy
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
		if(array[i]%3==0)
		{
			cout << array[i] << " ";
		}
	}
}
