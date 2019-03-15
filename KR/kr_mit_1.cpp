#include <iostream>
#include <ctime>
using namespace std;

void main() {	
/*	srand(time(NULL));
	const size_t N = 10;
	int arr[N]; 
	size_t count1 = 0, count2 = 0;
	double sum1 = 0, sum2 = 0;
	for (size_t i = 0; i < N; ++i)
	{
		arr[i] = rand() % 101;
		cout << arr[i] << "\t";
		if (arr[i] < 50)
		{
			sum1 += arr[i];
			++count1;
		}
		else
		{
			sum2 += arr[i];
			++count2;
		}
	}
	cout << endl;
	sum1 /= count1;
	sum2 /= count2;
	if (count1 != 0)
		cout << "srednee arifm (0; 49) = " << sum1 << endl;
	else
		cout << "net elementov v (0; 49)" << endl;
	if (count2 != 0)
		cout << "srednee arifm [50; 100) = " << sum2 << endl;
	else
		cout << "net elementov [50; 100)" << endl;*/

/*	srand(time(NULL));
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
		cout << "false" << endl;*/

	/*srand(time(NULL));
	const size_t N = 4, M = 5;
	int arr[N][M];
	double sum = 0;
	for (size_t i = 0; i < N; ++i)
	{
		for (size_t j = 0; j < M; ++j)
		{
			arr[i][j] = rand() % 256;
			sum += arr[i][j];
			cout << arr[i][j] << "\t";
		}
		cout << endl;
	}
	sum /= N * M;
	cout << endl << "sredn zna4 = " << sum << endl << endl;
	for (size_t i = 0; i < N; ++i)
	{
		for (size_t j = 0; j < M; ++j)
		{
			if (arr[i][j] < sum)
				arr[i][j] = 0;
			else
				arr[i][j] = 255;
			cout << arr[i][j] << "\t";
		}
		cout << endl;
	}*/
}