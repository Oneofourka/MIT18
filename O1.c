#include <stdio.h>	//connect the file stdio.h to use methods printf and scanf_s 
#include <locale.h> //for setlocale 

void main(){		//type and name our function.
	setlocale(LC_ALL, "RU");	//includes Russian Language
	printf("�����, ����� ������!\n� � ������� �� �����,\n��� ��� ��� ����,\n�������� � �����.\n�����\t\t\t�.��������\n");

//printf - message to the console	
/*	printf("�����, ����� ������!\n");		//second version
	printf("� � ������� �� �����,\n");
	printf("��� ��� ��� ����,\n");
	printf("�������� � �����.\n");
	printf("�����\t\t\t�.��������\n");	*/
}