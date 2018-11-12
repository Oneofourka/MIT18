#include <iostream>
#include <ctime> //dlya funkcii time(NULL) kotoruy vivodit vremya v sekundah s 01.01.1970 do tekushego vremeni
using namespace std;

void main()
{
	const int SIZE = 5; //	razmer stati4eskogo massiva doljen bit' konstantoy. nazvanie peremennoy esli const obi4no pishetsya CAPSLOCKom
	int arr[SIZE]; //sozdanie massiva s intovimi tipadami dannuh razmera - size. On ne zapolnen elementami; 

	cout << "nezapolnennue elementu:" << endl;
	for (size_t i = 0; i < SIZE; ++i)	//size_t special'nuy tip dannuh dlya indeksov (iteratorov). mojete ispolzovat' int
		cout << "arr[" << i << "] = " << arr[i] << endl;				//vivod elementov massiva. T.k. on ne zapolnen - to vivedet musor
	//zametim 4to massiv na4inaetsya s nulevogo elementa - eto vajno!!!
	cout << endl;
	srand(time(NULL)); //funkciya dlya togo 4tobi pri kajdom zapuske programmi - nam vidaval novue slu4aynie 4isla.

	for (size_t i = 0; i < SIZE; ++i)
		arr[i] = rand(); //vivodit slu4aynoe 4islo v diapozone ot [0; RAND_MAX]. RAND_MAX  = 32767.

	cout << "slu4aynue 4isla v diapozone [0; 32767]:" << endl;
	for (size_t i = 0; i < SIZE; ++i)
		cout << "arr[" << i << "] = " << arr[i] << endl;
	cout << endl;

	//no nam takie 4isla ne udobni i mu hoteli bi ispolzovat otricatelnie 4isla. poetomu ispolzuem % - ostatok ot deleniya.
	for (size_t i = 0; i < SIZE; ++i)
		arr[i] = rand() % 21 - 10; //vivodit slu4aynoe 4islo v diapozone ot [-10; 10]. to est' pri % 21, polu4aem [0;20] otnimaem 10 = [-10;10];

	cout << "slu4aynue 4isla v diapozone [-10; 10]:" << endl;
	for (size_t i = 0; i < SIZE; ++i)
		cout << "arr[" << i << "] = " << arr[i] << endl;
	cout << endl;
}