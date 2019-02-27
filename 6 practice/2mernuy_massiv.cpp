#include <iostream>
#include <ctime>

using namespace std;

void main()
{
	srand(time(NULL));
	const size_t COLS = 2, ROWS = 3;	//cols - stroki, rows - stolbci
//	int arr[COLS][ROWS]{}; sozdanie massiva i zapolnenie nulyami
//	int arr[COLS][ROWS]{ {1, 2, 3},{4, 5, 6} };	//sozdanie i zapolnenie srazu 4islami
	int arr[COLS][ROWS];	//sozdanie pustogo massiva
	cout << "int massiv:" << endl;
	for (size_t i = 0; i < COLS; ++i)
	{
		for (size_t j = 0; j < ROWS; ++j)
		{
//			cin >> arr[i][j];	//zapolnenie s konsoli
			arr[i][j] = rand() % 21 - 10;	//zapolnenie [-10; 10]
			cout << arr[i][j] << "\t";
		}
		cout << endl;
	}
	cout << endl;

	double dArr[COLS][ROWS];	//sozdanie veshestvennogo massiva
	cout << "double massiv:" << endl;
	for (size_t i = 0; i < COLS; ++i)
	{
		for (size_t j = 0; j < ROWS; ++j)
		{
			dArr[i][j] = rand() % 21 - 10 + rand() % 100 / 100.0; //zapolnenie [-10.0; 10.99] to4nost' 10^(-2)
			cout << dArr[i][j] << "\t";
		}
		cout << endl;
	}
	cout << endl;

	//zada4a. naydem min v kajdoy stro4ke
	const size_t n = 5, m = 6;
	int newArr[n][m];
	cout << "newArr:" << endl;;
	for (size_t i = 0; i < n; ++i)
	{
		for (size_t j = 0; j < m; ++j)
		{
			newArr[i][j] = rand() % 200 - 100;
			cout << newArr[i][j] << "\t";
		}
		cout << endl;
	}
	cout << endl;
	for (size_t i = 0; i < n; ++i)
	{
		int min = INT_MAX;			//min zadaem dlya kajdoy stro4ki zanogo. ETO VAJNO. 
		//esli on budet vne massiv, to on budet 1 dlya vseh. a nam nujen min dlya kajdoy stro4ki
		for (size_t j = 0; j < m; ++j)
			if (newArr[i][j] < min)
				min = newArr[i][j];
		cout << "min v " << i << " stroke = " << min << endl;
	}
	cout << endl;
	//a teper naidem v etom je massive max v kajdov stolbce
	for (size_t i = 0; i < m; ++i)
	{
		int max = INT_MIN;
		for (size_t j = 0; j < n; ++j)
			if (newArr[j][i] > max)
				max = newArr[j][i];
		cout << "max v " << i << " stroke = " << max << endl;
	}
	cout << endl;
	//summa v kajdoy stroke
	for (size_t i = 0; i < n; ++i)
	{
		int sum = 0;		//sum zanulyaem v cikle		
		for (size_t j = 0; j < m; ++j)
			sum += newArr[i][j];
		cout << "sum v " << i << " stroke = " << sum << endl;
	}
}