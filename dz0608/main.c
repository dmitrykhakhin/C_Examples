#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>
#define ROW 3
#define COLUMN 3

int main(int argc, char *argv[]) {
	SetConsoleCP(1251);                
    SetConsoleOutputCP(1251);
	
	printf("Программа почитает сумму введеных чисел по столбцам массивов.\n");
	
	int mas[ROW][COLUMN], i, j, sum[COLUMN] = {0};
	for(i = 0; i < ROW; i++)
	{
		for(j = 0; j < COLUMN; j++)
		{
			printf("Введите число в массив [%d] для ячейки [%d] = ", i, j);
			scanf("%i", &mas[i][j]);
		}
	}
	printf("\n");
	for(i = 0; i < ROW; i++)
	{
		for(j = 0; j < COLUMN; j++)
		{
			printf("\t%d", mas[i][j]);
			sum[j] += mas[i][j];	
		}
		printf("\n");	
	}
	printf("\n");
	for(j = 0; j < COLUMN; j++)
	{
		printf("\t%d", sum[j]);
	}
	return 0;
}
