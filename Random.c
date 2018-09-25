#include <stdio.h> 
#include <locale.h>
#include <stdlib.h>

#define count 15

enum
{
	false = 0,
	true = 1
};
void main() 
{
	setlocale(LC_ALL, "ru");
	int A[count], B[count], C[count];
	short int check;
	srand(time(NULL)); 
	
	for (size_t i = 0; i < count; )
	{		
		check = false;
		int newRandom = rand() % count + 1;
		for (size_t j = 0; j < i; ++j)
		{
			if (A[j] == newRandom)
			{
				check = true;
				break;
			}
		}
		if (!check)
		{
			A[i] = newRandom;
			++i;
		}
	}

	int chetchik = 0;

	for (size_t i = 0; i < count; )
	{
		check = false;
		int newRandom = rand() % count + 1;
		if (i == 0 && A[i] == newRandom)
			check = true;
		for (size_t j = 0; j < i; ++j)
		{
			if (B[j] == newRandom || A[i] == newRandom)
			{
				check = true;
				break;
			}
		}
		
		if (!check)
		{
			B[i] = newRandom;
			++i;
		}
		++chetchik;
		if (chetchik > 15)
		{
			i = 0;
			chetchik = 0;
		}
	}
	
	chetchik = 0;
	for (size_t i = 0; i < count; )
	{
		check = false;
		int newRandom = rand() % count + 1;
		if ((i == 0 && A[i] == newRandom) || (i == 0 && B[i] == newRandom))
			check = true;
		for (size_t j = 0; j < i; ++j)
		{
			if (C[j] == newRandom || A[i] == newRandom|| B[i] == newRandom)
			{
				check = true;
				break;
			}
		}
		if (!check)
		{
			C[i] = newRandom;
			++i;
		}
		++chetchik;
		if (chetchik > 15)
		{
			i = 0;
			chetchik = 0;
		}
	}
	printf("¹\t1\t2\t3\n\n");
	for (size_t i = 0; i < count; ++i)
		printf("%d\t%d\t%d\t%d\n", i + 1, A[i], B[i], C[i]);

	for (size_t i = 0; i < count; ++i)
		if (A[i] == B[i] || A[i] == C[i] || B[i] == C[i])
			printf("\nfalse\n");
}