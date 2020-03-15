#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>

int main(int argc, char *argv[]) {
    SetConsoleCP(1251);                
    SetConsoleOutputCP(1251);
	char h, i, j;
	printf("¬ведите высоту трегольника, желательно от 3 до 30: ");
	scanf("%hhd", &h);
	for(i = 0; i < h; i++)
	{
		for(j = 0; j < h - i - 1; j++)
			printf(" ");
		for(j = 0; j < 2 * i + 1; j++)
			printf("*");
		printf("\n");
	}
	return 0;
}
