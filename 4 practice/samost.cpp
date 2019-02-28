#include <iostream>
#include <ctime>
using namespace std;

void main() {
	srand(time(NULL));
	const size_t n = 10;
	int arr[n], sum, j = 11;
	for (size_t i = 0; i < n; ++i)
	{
		arr[i] = rand() % 41 - 20;
		cout << arr[i] << "\t";
	}
	cout << endl;

	for (size_t i = n - 2; i >= 1; --i)
	{
		if (arr[i] < 0 && arr[i - 1] < 0 && arr[i + 1] < 0)
		{
			sum = arr[i - 1] + arr[i + 1];
			j = i;
			break;
		}
	}
	if (j != 11)
		cout << "sum = " << sum << "\ti = " << j << endl;
	else
		cout << "NO" << endl;
}