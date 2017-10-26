
#include <stdio.h>
#define MAXLINE 1000

int getline2(char line[], int maxline);
void copy2(char to[], char from[]);
int contarCaracteres(char str[]);
int contarPalabras(char str[]);

int main()
{
/* Taller Oswaldo Aguilar y Alex Macas*/
int len;
int max;
int caracteres;
int palabras;
char line[MAXLINE];
char longest[MAXLINE];
max = 0;

while((len = getline2(line, MAXLINE))>0)
	if(len>max){
	    max = len;
	    copy2(longest, line);
	}

if(max>0)
{
	printf("%s",longest);
	caracteres = contarCaracteres(longest);
	printf("El numero de caracteres de la cadena mayor es %d\n", caracteres);
	palabras = contarPalabras(longest);
	printf("El numero de palabras de la cadena mayor es %d\n", palabras);
	printf("Gracias por Usar el programa");
		}

return 0;
}

int getline2(char s[], int lim)
{
	int c, i;

	for(i=0; i< lim -1 && (c=getchar()) != EOF && c!= '\n'; i++)
		s[i] = c;
	if(c == '\n')
	{
		s[i] = c;
		++i;
	}
	s[i] = '\0';
	return i;
}

void copy2(char to[], char from[])
{
	int i;
	i = 0;
	while((to[i] = from[i]) != '\0')
		++i;
}

int contarCaracteres(char str[])
{
	long nCaracteres;
	nCaracteres = 0;
	while(str[nCaracteres] != '\0'){
		++nCaracteres;
}
	return nCaracteres;
}

int contarPalabras(char str[])
{
	long nPalabras;
	long nCaracteres;
	nPalabras = 0;
	nCaracteres = 0;
	while(str[nCaracteres] != '\0')
	{
		if(str[nCaracteres] == '\t' || str[nCaracteres] == ' ' || str[nCaracteres] == '\n')
			++nPalabras;
		++nCaracteres;
	}
	return nPalabras;
}
