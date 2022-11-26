#include <iostream>
using namespace std;

int main()
{
	int a, b = 0, c, sum = 0;
	cin >> a;
	while(a != 0)
	{
		c = a % 10;
		a /= 10;
		b *= 10;
		b += c;
		cout << b << endl;
	}
	while (b != 0)
	{
		sum += b % 10;
		b /= 10;
	}
	cout << sum << endl;


	return 0;
}


