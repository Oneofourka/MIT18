#include <iostream>
using namespace  std;

void zad2a()
{
	unsigned int n, s = 0;
	cout << "Find the sum of digits of number." << endl << "Enter natural number n = ";
	cin >> n;
	while (n > 0)
	{
		s = s + n % 10;
		n = n / 10;
	}
	cout << "s = " << s << endl << endl;
}

void zad2b()
{
	unsigned int n = 0;
	cout << "Find the fisrt digit of number." << endl << "Enter natural number n = ";
	cin >> n;
	while (n / 10 > 0)
	{
		n = n / 10;
	}
	cout << "n = " << n << endl << endl;
}

void zad2c()
{
	unsigned int n, m = 0;
	cout << "Swap the order of numbers on the reverse" << endl << "Enter natural number n = ";
	cin >> n;
	while (n > 0)
	{
		m = m * 10 + n % 10;
		n = n / 10;
	}
	cout << "Otvet = " << m << endl << endl;
}

void zad2d()
{
	unsigned int n;
	bool flag = false;
	cout << "Find out if the number 6 in the record number n * n" << endl << "Enter natural number n = ";
	cin >> n;
	n = n * n;
	while (n > 0)
	{
		if (n % 10 == 6)
			flag = true;
		n = n / 10;
	}
	if (flag)
		cout << "True" << endl << endl;
	else
		cout << "False" << endl << endl;
}

void main()
{
	char symbol = ' ';
	do
	{
		cout << "Enter 'a', 'b', 'c', 'd' or 'e' for exist" << endl << endl;
		cin >> symbol;
		cout << endl;
		switch (symbol)
		{
		case 'a':
			zad2a();
			break;
		case 'b':
			zad2b();
			break;
		case 'c':
			zad2c();
			break;
		case 'd':
			zad2d();
			break;
		case 'e':
			break;
		default:
			cout << "Error, your number dosn't exist" << endl << symbol << endl;
			break;
		}
	} while (symbol != 'e');
}