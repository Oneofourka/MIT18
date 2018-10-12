#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

void main()
{
	double h, f, x;
	int n;
	cout << "Enter n = ";
	cin >> n;
	cout << "Enter h = ";
	cin >> h;

	for (double i = 0; i <= n; i = i + h)
	{
		x = 1 + i * h;
		f = (pow(x, 2) - 3 * x + 2) / (sqrt(2 * pow(x, 3) - 1));
		cout << "x = " << setw(6) << x << "\tf(x) = " << setw(9) << f << "\ti = " << i << endl;
	}
}