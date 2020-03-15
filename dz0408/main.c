#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <windows.h>

int main(int argc, char *argv[]) {
	double a, b, c, d;
	SetConsoleCP(1251); 
	SetConsoleOutputCP(1251);
	
	printf("Расчет квадратного уравнения: (ax2 + bx + c = 0)\n");
	
	while(1)
	{
    	printf("Введите коэффициенты квадратного уравнения:\n");
		printf("a = ");
        scanf("%lf",&a); 
    	if(a == 0)
        {
			printf("Значение a не может быть = 0!\n");
			continue;
        }
        printf("b = "); 
		scanf("%lf",&b);
		printf("c = "); 
		scanf("%lf",&c);
		break;
	}
	d = b * b - 4 * a * c;
	if(d < 0)
	{
		printf("Дискриминант не должен быть отрицательным!");
		return 0;
	}
	else if(d == 0)
		printf("x = %g", - b /(2 * a));
	else
		printf("x1 = %g\nx2 = %g", (- b + sqrt(d))/(2 * a), (- b - sqrt(d))/(2 * a));
	return 0;
}
