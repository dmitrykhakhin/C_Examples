#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>
#define N 5

int main(int argc, char *argv[]) {
	SetConsoleCP(1251);                
    SetConsoleOutputCP(1251);
	
	
	int mas[N], i, n;
	for(i = 0; i < N; i++)
	{
		printf("¬ведите число в массив: [%d] = ", i);
		scanf("%i", &mas[i]);
	}
	printf("¬ведите одно из введеных чисел: ");
	scanf("%d",&n);
	for(i = 0; i < N; i++)
	{
		if(mas[i] == n)
		{
			printf("Ёто число в €чейке массива: %d", i);
			break;
		}
	}
	return 0;
}
