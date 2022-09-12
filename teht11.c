#include <stdio.h>

int main()
{
	const int salanumero = 1234;
	int luku;
	
	printf("Arvaa ajattelemani numero: \n");
	scanf("%d", &luku);
	
	if(luku == salanumero)
		printf("Arvasit oikein!\n");
	
	printf("Ohjelma loppui.");
	
	getch();
	return 0;
}
