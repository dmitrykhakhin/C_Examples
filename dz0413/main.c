#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>

int main(int argc, char *argv[]) {
	SetConsoleCP(1251);                
    SetConsoleOutputCP(1251);
    
	char *str, num;
	printf("Введите номер дня недели: ");
	scanf("%hhd", &num);
	switch(num)
	{
		case 1:
			str = "Понедельник";
			break;
		case 2:
			str = "Вторник";
			break;
		case 3:
			str = "Среда";
			break;
		case 4:
			str = "Четверг";
			break;	
		case 5:
			str = "Пятница";
			break;	
		case 6:
			str = "Суббота";
			break;	
		case 7:
			str = "Воскресенье";
			break;	
		default:
			str = "Неверный ввод";		
	}	
	printf("%s", str);
	return 0;
}
