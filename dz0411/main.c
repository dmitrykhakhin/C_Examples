#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main(int argc, char *argv[]) {
	char n;
	SetConsoleCP(1251); 
	SetConsoleOutputCP(1251);
	printf("������� ����� ��� ������: ");
	scanf("%hhi", &n);
	if(n > 0 && n < 6)
		printf("������� ����");
	else if(n == 6)
		printf("�������");
	else if (n == 7)
		printf("�����������");
	else
		printf("������");
	return 0;
}
