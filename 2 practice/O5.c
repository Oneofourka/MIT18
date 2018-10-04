#include <stdio.h>

void main()
{
	int a, b, c, max;
	printf("Enter\n");

	printf("a = ");
	scanf_s("%d", &a);

	printf("b = ");
	scanf_s("%d", &b);

	printf("c = ");
	scanf_s("%d", &c);

/*	if (b > c)			//first version
		max = b;
	else
		max = c;

	if (b < a)
		max = max + a;
	else
		max = max + b;

	printf("Sum = %d\n", max);
*/


/*	if (a >= b && c >= b)	//second version
		max = b;			//minimal

	if (b >= a && c >= a)	// && is logical And, || is logical Or.
		max = a;			//minimal

	if (a >= c && b >= c)
		max = c;			//minimal

	max = a + b + c - max;
	printf("Sum = %d\n", max); 
*/

/*	if (a >= b && a >= c)	//third version
	{
		max = a;
		if (b > c)
			max = max + b;
		else
			max = max + c;
	}
	else if (b >= a && b >= c)
	{
		max = b;
		if (a > c)
			max = max + a;
		else
			max = max + c;
	}
	else
	{
		max = c;
		if (a > b)
			max = max + a;
		else
			max = max + b;
	}
	printf("Sum = %d\n", max);
*/
}