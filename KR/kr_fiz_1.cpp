#include <iostream>
#include <ctime>
using namespace std;

void main() {	
/*	int number, sum = 0;
	cout << "enter number" << endl;
	cin >> number;
	while (number != 0)
	{
		sum += number % 10;
		number /= 10;
	}
	cout << sum << endl;*/

/*	srand(time(NULL));
	const size_t N = 10;
	int arr[N];
	double sum = 0;
	for (size_t i = 0; i < N; ++i)
	{
		arr[i] = rand() % 101;
		cout << arr[i] << "\t";
		sum += arr[i];
	}
	cout << endl;
	sum /= N;
	cout << "sredn znar = " << sum << endl;*/

	srand(time(NULL));
	const size_t N = 10;
	int arr[N];
	bool check = false;
	for (size_t i = 0; i < N; ++i)
	{
		arr[i] = rand() % 6;
		cout << arr[i] << "\t";
	}
	cout << endl;
	for (size_t i = 1; i < N; ++i)
	{
		if (arr[i] == arr[i - 1])
		{
			check = true;
			break;
		}
	}
	if (check)
		cout << "true" << endl;
	else
		cout << "false" << endl;
}