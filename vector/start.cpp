#include <iostream>
#include <ctime>
#include <vector>	//biblioteka dlya classa vector
using namespace std;

void main()
{
	srand(time(NULL));
	vector <int> myVector;	//sozdanie vectora tipa int;
	
	cout << "size = " << myVector.size() << endl;	//vector.size() - metod (funcsiya) kotoraya vozvrashaet razmver vectora.
										//u nas on poka raven nulya, t.k. pust;

	for (size_t i = 0; i < 5; ++i)
	{
		myVector.push_back(i);	//dobavlyaem v konec massiva i
		cout << myVector[i] << "\t";	//vivodim v odnu stroku
	}
	cout << endl;

	cout << "size = " << myVector.size() << endl;	//vector.size() teper' vozvrashaet 5;

	myVector.push_back(50);
	myVector.push_back(100);
	cout << "size = " << myVector.size() << endl;	//vector.size() teper' vozvrashaet 7;

	myVector.pop_back();	//udalyat last element (100).

	//proverim - udalil li 100.
	for (size_t i = 0; i < myVector.size(); ++i)	//zamechaem 4to i < myVector.size();	
		cout << myVector[i] << "\t";	
	cout << endl;

	//teper' udalim vtoroy element, to est' myVector[1], eto delaetsya 4erez metod erase; 
	myVector.erase(myVector.begin() + 1);	//tut nel'zya vzyat' i napisat' prosto tak index [].
	//nujno deystvovat' 4erez iterator myVector.begin(), kotoriy vozvrashaet iterator na perviy element
	// + 1 i mu tipa uje na vtorom elemene.

	for (size_t i = 0; i < myVector.size(); ++i)
		cout << myVector[i] << "\t";
	cout << endl;

	myVector.erase(myVector.end() - 2);	//udalim predposlednuy element (4);

	for (size_t i = 0; i < myVector.size(); ++i)
		cout << myVector[i] << "\t";
	cout << endl;

	//teper' za4istim vector polnost'yu;
	for (size_t i = 0; myVector.size() != 0; )
		myVector.pop_back();

	//ili mojno tak 
	myVector.clear();
	
	//ili mojno tak
	for (size_t i = 0; myVector.size() != 0; )
		myVector.erase(myVector.begin());

	cout << "size = " << myVector.size() << endl;
	if (myVector.empty())	//empty() vozvrashaet true esli vector pust, ili vector.size() == 0;
		cout << "vector pust" << endl;
	//https://ru.cppreference.com/w/cpp/container/vector vot tut mojno metodu glyanut'
}
