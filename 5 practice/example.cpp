#include <iostream>
#include <ctime>
using namespace std;

void FillArray(int* const arr, const size_t size)	//(int *arr, int size) (int arr[], int size);
{
	for (size_t i = 0; i < size; ++i)
		arr[i] = rand() % 21 - 10;
}

void ShowArray(const int* const arr, const size_t size)
{
	for (size_t i = 0; i < size; ++i)
		cout << arr[i] << "\t";
	cout << endl;
}

int SumElemArr(const int* const arr, const size_t size)
{
	int sum = 0;
	for (size_t i = 0; i < size; ++i)
		if (arr[i] > 0)
			sum += arr[i];
	return sum;
}

void SortArray(int* const arr, const size_t size)
{
	for (size_t i = 0; i < size - 1; ++i)
		for (size_t j = 0; j < size - i - 1; ++j)
		{
			if (arr[j] > arr[j + 1])
			{
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
}

void main()
{
	srand(time(NULL));
	const size_t SIZE = 10;
	int arr[SIZE];
	FillArray(arr, SIZE);
	ShowArray(arr, SIZE);
	cout << "sum polojitelnih elementov = " << SumElemArr(arr, SIZE) << endl;
	SortArray(arr, SIZE);
	cout << "Sort array:" << endl;
	ShowArray(arr, SIZE);
}
