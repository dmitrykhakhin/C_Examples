#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <Windows.h>

int main(int argc, char *argv[]) {
	SetConsoleCP(1251);                
    SetConsoleOutputCP(1251);
	
	char i, sum = 0, num;
	srand((unsigned int)time(NULL));
	printf("��������� ��������� ������� �������������� �� ������ ��������� �����.\n\n");
	
	for(i = 0; i < 10; i++)
	{
		num = rand() % 10 + 1;
		printf("%hhd\n", num);
		sum += num;
	}
	printf("\n������� �������������� ���� ����� = %g", sum / 10.0);
	return 0;
}
