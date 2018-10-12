#include <iostream>
#include <cmath>

using namespace std;


void zad1a()
{
	int n, p = 1;
	cout << "Enter n = ";
	cin >> n;
	for (int i = 1; i <= n; ++i)
	{
		p = p * i;
	}
	cout << "Factorial = " << p << endl;
}

void zad1b()
{
	int n;
	double p = 1;
	cout << "Enter n = ";
	cin >> n;
	for (int i = 1; i <= n; ++i)
	{
		p = p * (1 + 1 / pow(i, 2));
	}
	cout << "P = " << p << endl;
}

void zad1c()
{
	int n;
	double sumSin = 0, sum = 0;
	cout << "Enter n = ";
	cin >> n;
	for (int i = 1; i <= n; ++i)
	{
		sumSin = sumSin + sin(i);
		sum = sum + 1 / sumSin;

	}
	cout << "Sum = " << sum << endl;
}

void zad1d()
{
	int n;
	double sum = 0;
	cout << "Enter n = ";
	cin >> n;
	for (int i = 1; i <= n; ++i)
	{
		sum = sqrt(2 + sum);
	}
	cout << "Sum = " << sum << endl;
}

void main()
{
//	zad1a();
//	zad1b();
//	zad1c();
	zad1d();
}