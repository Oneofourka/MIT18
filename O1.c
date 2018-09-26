#include <stdio.h>	//connect the file stdio.h to use methods printf and scanf_s 
#include <locale.h> //for setlocale 

void main(){		//type and name our function.
	setlocale(LC_ALL, "RU");	//includes Russian Language
	printf("Осень, осень погоди!\nИ с дождями не спеши,\nДай нам еще лета,\nСолнышка и света.\nАвтор\t\t\tА.Тесленко\n");

//printf - message to the console	
/*	printf("Осень, осень погоди!\n");		//second version
	printf("И с дождями не спеши,\n");
	printf("Дай нам еще лета,\n");
	printf("Солнышка и света.\n");
	printf("Автор\t\t\tА.Тесленко\n");	*/
}