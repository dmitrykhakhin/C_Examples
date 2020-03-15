#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <Windows.h>

int main(int argc, char *argv[]) {
	SetConsoleCP(1251);                
    SetConsoleOutputCP(1251);
	
	char i, sum = 0, num;
	srand((unsigned int)time(NULL));
	printf("Программа вычисляет среднее арифметическое из десяти случайных чисел.\n\n");
	
	for(i = 0; i < 10; i++)
	{
		num = rand() % 10 + 1;
		printf("%hhd\n", num);
		sum += num;
	}
	printf("\nСреднее арифметическое этих чисел = %g", sum / 10.0);
	return 0;
}
