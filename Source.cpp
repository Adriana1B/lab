#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	double x;
	double b;
	double c;
	double a;
	double F;
	cout << "x = "; cin >> x;
	cout << "b = "; cin >> b;
	cout << "c = "; cin >> c;
	cout << "a = "; cin >> a;

	//1 розгал.повн

	if (x<0 && b!=0)
	{
		F = a * pow(x, 2) + b;
	}
	if (x>0 && b==0)
	{
		F = x - a / x - c;
	}
	if (!(x < 0 && b != 0) && !(x > 0 && b == 0))
	{
		F = x / c;
	}
	cout << endl;
	cout << "1) F = " << F << endl;
//2скор.
	if (x < 0 && b != 0)
	{
		F = a * pow(x, 2) + b;
	}
	else
	{
		if (x > 0 && b == 0)
		{
			F = x - a / x - c;
		}
		else
		{
			F = x / c;
		}
	}
	cout << "2) F = " << F << endl;
	cin.get();
	return 0;
}