#include <stdio.h>
#include <stdlib.h>

char gl(unsigned char ch)
{
	if(	ch == 128 || ch == 160 || //à
		ch == 133 || ch == 165 || //å
		ch == 136 || ch == 168 || //è
		ch == 142 || ch == 174 || //î
		ch == 147 || ch == 227 || //ó
		ch == 155 || ch == 235 || //û
		ch == 157 || ch == 237 || //ý
		ch == 158 || ch == 238 || //þ
		ch == 159 || ch == 239 || //ÿ
		ch == 240 || ch == 241)   //¸
		return 1;
	else
		return 0;
}

char sogl(unsigned char ch)
{
	if(	ch > 128 && ch < 133 || ch > 160 && ch < 165 ||//á,â,ã,ä 
		ch > 133 && ch < 136 || ch > 165 && ch < 168 ||//æ,ç 
		ch > 136 && ch < 142 || ch > 168 && ch < 174 ||//é,ê,ë,ì,í
		ch > 142 && ch < 147 || ch == 175 || ch >223 && ch < 227 ||//ï,ð,ñ,ò
		ch > 147 && ch < 154 || ch > 227 && ch < 234//ô,õ,ö,÷,ø,ù
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
