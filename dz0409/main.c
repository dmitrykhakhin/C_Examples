#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>

int main(int argc, char *argv[]) {
	SetConsoleCP(1251);                
    SetConsoleOutputCP(1251);
	
	int n;
	printf("Введите число = ");
	scanf("%i", &n);
	if(n % 2)
		printf("Это число нечетное");
	else
		printf("Это число четное");
	return 0;
}
