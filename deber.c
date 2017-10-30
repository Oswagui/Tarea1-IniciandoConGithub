#include <stdio.h>
#define MAXLINE 1000

int getline2(char line[], int maxline);
void copy2(char to[], char from[]);
int contarCaracteres(char str[]);
int contarPalabras(char str[]);

int main()
{
int len;
int max;
int caracteres;
int palabras;
char line[MAXLINE];
char longest[MAXLINE];
max = 0;
int opcion;
opcion = 1;

printf("Ingrese todas las cadenas para encontrar la frase más larga(Ctrl + D) cuando ingreso todas:\n");
while((len = getline2(line, MAXLINE))>0)
	if(len>max){
	    max = len;
	    copy2(longest, line);
	}

if(max>0)
{
	while(opcion != 3){
		printf("\n-------------------------------------------------------------");
		printf("\nLa frase más larga es %s",longest);
		printf("\n\t\t Menu\n 1.- Contar Caracteres\n 2.- Contar Palabras\n 3.- Salir\n");
		printf("Que desea hacer: ");
		scanf("%d", &opcion);
		if(opcion == 1)
		{
			caracteres = contarCaracteres(longest);
			printf("\nEl numero de caracteres de la cadena mayor es %d\n", caracteres);
		}
		if(opcion == 2){
			palabras = contarPalabras(longest);
			printf("\nEl numero de palabras de la cadena mayor es %d\n", palabras);
		}
		if(opcion == 3){
			printf("\nGracias por Usar el programa\n");
		}
	}

return 0;
}
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
