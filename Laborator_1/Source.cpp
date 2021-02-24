/*Read a sentence from the input using scanf API. Then sort split 
it into words and write to the screen (using the printf API) the 
words sorted (from the longest one to the shortest one).If two words 
have the same length - they will be sorted out alphabetically. We 
consider that each word is separated from another one using space 
(one or multiple).

Example: let's consider the following sentence: 
"I went to the library yesterday". 
The program will print the following to the screen:
   			 yesterday
   			 library
   			 went
   			 the
   			 to
   			 I
*/
#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;

void citire_din_fisier();
void Ruleaza_programul();
void sorteaza(char Propozitie[20][20], int numarCuvinte);
void Text_problema();

void sorteaza(char Propozitie[20][20], int numarCuvinte)
{
	char aux[20];
	for (int i = 0; i < numarCuvinte-1; i++)
		for (int j = i + 1; j < numarCuvinte; j++)
			if (strlen(Propozitie[i]) < strlen(Propozitie[j]))
			{
				strcpy(aux, Propozitie[i]); strcpy(Propozitie[i], Propozitie[j]); strcpy(Propozitie[j], aux);
			}
			else 
				if (strlen(Propozitie[i]) == strlen(Propozitie[j]))
				{
					if (strcmp(Propozitie[i], Propozitie[j])>0)
					{
						strcpy(aux, Propozitie[i]); strcpy(Propozitie[i], Propozitie[j]); strcpy(Propozitie[j], aux);
					}
				}
}

void Text_problema()
{
	// Date despre student, detalii
	printf("TABLAN ANDREI - 1A5, OOP 2021 - LABORATOR 1 - PROBLEMA 3 \n\n");

	// Enuntul problemei
	printf("   Read a sentence from the input using scanf API. Then sort split \n");
	printf(" it into words and write to the screen (using the printf API) the  \n");
	printf(" words sorted (from the longest one to the shortest one).If two words \n");
	printf(" have the same length - they will be sorted out alphabetically. We \n");
	printf(" consider that each word is separated from another one using space \n");
	printf(" (one or multiple).\n");
	printf(" yesterday\n");
	printf(" library\n");
	printf(" went\n");
	printf(" the \n");
	printf(" to \n");
	printf(" I \n");
}
void citire_din_fisier()
{
	printf("Introduceti numarul de cuvinte din propozitie: ");
	int numarCuvinte;
	scanf_s("%d", &numarCuvinte, 4);
	printf("Introduceti o propozitie: ");
	char cuvant[20],Propozitie[20][20];
	//scanf("%19s", cuvant);
	int i = 0;
	while (scanf_s("%19s", cuvant, 19))
	{
		strcpy(Propozitie[i],cuvant);
		i += 1;
		if (i >= numarCuvinte)break;
	}
	sorteaza(Propozitie,numarCuvinte);
	for(int i=0; i<numarCuvinte;i++)
		printf("Cuvantul citit este: %s\n", Propozitie[i]);
}

void Ruleaza_programul()
{
	Text_problema();
	citire_din_fisier();
}

int main()
{
	Ruleaza_programul();
	return 0;
	system("pause");
}