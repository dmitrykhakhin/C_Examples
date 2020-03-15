#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main(int argc, char *argv[]) {
	char n;
	SetConsoleCP(1251); 
	SetConsoleOutputCP(1251);
	printf("Введите номер дня недели: ");
	scanf("%hhi", &n);
	if(n > 0 && n < 6)
		printf("Рабочий день");
	else if(n == 6)
		printf("Суббота");
	else if (n == 7)
		printf("Воскресенье");
	else
		printf("Ошибка");
	return 0;
}
