#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>
#define N 5

int main(int argc, char *argv[]) {
	SetConsoleCP(1251);                
    SetConsoleOutputCP(1251);
	
	
	int mas[N], i, n = 0;
	double sum = 0;
	for(i = 0; i < N; i++)
	{
		printf("������� ������������� �����, ���� 0 � ������ ������� [%d] = ", i);
		scanf("%i", &mas[i]);
		if(mas[i] != 0)
		{
			n++;
			sum += mas[i];
		}
	}
	printf("����� ������ ����: %d\n������� �������������� = %g", n, sum/n);
	return 0;
}

