#include <iostream>

using namespace std;

int main()
// jezeli wszystkie cyfry w liczbie sa parzyste to ja wypisujemy
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
		int a=array[i];
		bool flag=true;
		while(a>0)
		{
			if((a%10)%2==1)
			{
				flag = false;
			}	
			a=a/10;
		}	
		if(flag==true)
		{
			cout << array[i] << " ";
		}
	}	
	
}
