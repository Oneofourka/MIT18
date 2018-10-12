#include <iostream>
#include <ctime>

using namespace std;

const int countTheme = 3;
const int countPeople = 15;
const int countSolution = 5;

void main()
{
	int A[countPeople][countTheme];
	srand(time(NULL));

	for (size_t i = 0; i < countTheme; ++i)
	{
		for (size_t j = 0; j < countPeople; ++j)
		{
			A[j][i] = rand() % (countSolution) + 1 + i * countSolution;
			cout << A[j][i] << endl;
			int s = 0;
			for (size_t k = 0; k <= j; ++k)
			{
				if (A[j][i] == A[k][i])
					s++;
			}
			if (s > countTheme)
				--j;
		}
	}

	for (size_t i = 0; i < countPeople; ++i)
	{
		cout << i + 1;
		for (size_t j = 0; j < countTheme; ++j)
		{
			cout << "\t" << A[i][j];
		}
		cout << endl;
	}
}