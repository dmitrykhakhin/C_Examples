#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>

int main(int argc, char *argv[]) {
	SetConsoleCP(1251);                
    SetConsoleOutputCP(1251);
	
	int n;
	printf("������� ����� = ");
	scanf("%i", &n);
	if(n % 2)
		printf("��� ����� ��������");
	else
		printf("��� ����� ������");
	return 0;
}
