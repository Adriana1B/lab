#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	double x;
	double y;
	double A;
	double B;
	cout << "x= "; cin >> x;
	A = 1 + 9 * x;

	if (x<=0)
	{
		B= log(abs(sin(x))) + pow(x, 7);
	}
	if (x <= 3 && x > 0)
	{
		B = 1 / tan((abs(x + 1)) / 2);
	}
	if (x<3)
	{
		B = 3 * x - pow(x, 5);
	}
	y = A + B;
	y = 1 + 9 * x;
	cout << endl;
	cout << "1) y = " << y << endl;
	//2v
	if (x <= 0)
	{
		B = log(abs(sin(x))) + pow(x, 7);
	}
	else
	{
		if (x<=3 && x>0)
		{
			B = 1 / tan((abs(x + 1))) / 2;
		}
		else
		{
			if (x<3)
			{
				B = 3 * x - pow(x, 5);
			}
		}
		y = A + B;
		y = 1 + 9 * x;
		cout << "2) y = " << y << endl;
		return 0;
	}
	
}