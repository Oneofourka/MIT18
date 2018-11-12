#include <iostream>
#include <ctime>

using namespace std;

void main()
{
	srand(time(NULL));
	const int size = 10;
	int arr[size];
	//zapolnenie massiva
	cout << "Our massive is:" << endl;
	for (size_t i = 0; i < size; ++i)
	{
		arr[i] = rand() % 21 - 10;
		cout << "arr[" << i << "] = " << arr[i] << endl;
	}
	//naydem summu elementov i proizvedenie ne nulevuh elementov
	int proizvedenie = 1, summa = 0;
	for (size_t i = 0; i < size; ++i)
	{
		if (arr[i] != 0)			//esli element massiva ne nulevoy
			proizvedenie *= arr[i];	//proizvedenie = proizvedenie * arr[i]; 
		summa += arr[i];		//summa = summa + arr[i];
	}
	cout << "proizvedenie = " << proizvedenie << endl << "summa = " << summa << endl;

	//teper' uznaem koli4estvo par elementov u kotorih odinakovuy znak. 0 vozmem za polojitelnuy.
	int count_par = 0;
	for (size_t i = 0; i < size - 1; ++i)	//vnimanie na uslovie, tam size - 1, t.k. mi budem ispolzavat indeks i + 1;
		if (arr[i] >= 0 && arr[i + 1] >= 0 || arr[i] < 0 && arr[i + 1] < 0)
			++count_par;
	cout << "koli4estvo par = " << count_par << endl;
	// imeyte vvidu esli 1, 2, 3 - to eto 2 pari: 1-2, 2-3.
}