#include <stdio.h>	//connect the file stdio.h to use methods printf and scanf_s 
#include <locale.h> //for setlocale 

void main(){		//type and name our function.
	setlocale(LC_ALL, "RU");	//includes Russian Language
	double x;	//double = real, int = integer
	printf("������� x\n");
	scanf_s("%lf", &x);	//%lf = data type. lf = long float = double
	
	printf("�� ����� ����� = %lf\n", x);
	printf("%lf -  ��� ����� ����� �� �����", x);
}