#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>

int main(int argc, char *argv[]) {
	SetConsoleCP(1251);                
    SetConsoleOutputCP(1251);
    
	char *str, num;
	printf("������� ����� ��� ������: ");
	scanf("%hhd", &num);
	switch(num)
	{
		case 1:
			str = "�����������";
			break;
		case 2:
			str = "�������";
			break;
		case 3:
			str = "�����";
			break;
		case 4:
			str = "�������";
			break;	
		case 5:
			str = "�������";
			break;	
		case 6:
			str = "�������";
			break;	
		case 7:
			str = "�����������";
			break;	
		default:
			str = "�������� ����";		
	}	
	printf("%s", str);
	return 0;
}
