#include <iostream>

using namespace std;

int main()
{
	//zamienia wartosciami dwie zmienne
	int a = 7;
	int b = 10;
	cout << a << " " << b << endl;
	int tmp = a;  // tmp = 7
	a = b; // a = 10
	b = tmp; // b = 7
	cout << a << " " << b << endl;
	

}
