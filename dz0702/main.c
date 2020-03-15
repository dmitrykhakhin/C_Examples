#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>

char cmp(int a, int b)
{
	if(a < b)
		return '<';
	else if (a > b)
		return '>';
	else
		return '=';
}

int main(int argc, char *argv[]) {
	SetConsoleCP(1251);                
    SetConsoleOutputCP(1251);
	
	int a, b;
	printf("¬ведите число дл€ a = ");
	scanf("%d", &a);
	printf("¬ведите число дл€ b = ");
	scanf("%d", &b);
	printf("a %c b", cmp(a,b));
	return 0;
}
