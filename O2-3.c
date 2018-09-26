#include <stdio.h>	//connect the file stdio.h to use methods printf and scanf_s 
#include <locale.h> //for setlocale 

void main(){		//type and name our function.
	setlocale(LC_ALL, "RU");	//includes Russian Language
	double x;	//double = real, int = integer
	printf("Введите x\n");
	scanf_s("%lf", &x);	//%lf = data type. lf = long float = double
	
	printf("Вы ввели число = %lf\n", x);
	printf("%lf -  вот какое число Вы ввели", x);
}