#include <stdio.h>
#include <stdlib.h>

char gl(unsigned char ch)
{
	if(	ch == 128 || ch == 160 || //�
		ch == 133 || ch == 165 || //�
		ch == 136 || ch == 168 || //�
		ch == 142 || ch == 174 || //�
		ch == 147 || ch == 227 || //�
		ch == 155 || ch == 235 || //�
		ch == 157 || ch == 237 || //�
		ch == 158 || ch == 238 || //�
		ch == 159 || ch == 239 || //�
		ch == 240 || ch == 241)   //�
		return 1;
	else
		return 0;
}

char sogl(unsigned char ch)
{
	if(	ch > 128 && ch < 133 || ch > 160 && ch < 165 ||//�,�,�,� 
		ch > 133 && ch < 136 || ch > 165 && ch < 168 ||//�,� 
		ch > 136 && ch < 142 || ch > 168 && ch < 174 ||//�,�,�,�,�
		ch > 142 && ch < 147 || ch == 175 || ch >223 && ch < 227 ||//�,�,�,�
		ch > 147 && ch < 154 || ch > 227 && ch < 234//�,�,�,�,�,�
		)
		return 1;
	else
		return 0;
}

int main(int argc, char *argv[]) {
	unsigned char ch;
	do
	{
		printf("Vvedite odnu russkuyu bukwu = ");
		scanf(" %c", &ch);
		if(gl(ch))
			printf("glasnaya\n");
		else if(sogl(ch))
			printf("soglasnaya\n");
		else
			printf("neverny vvod\n");
	}while(ch != 'q');
	return 0;
}
