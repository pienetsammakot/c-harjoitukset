#include <stdio.h>

int main()
{
	const int salanumero=20;   //kokonaislukuvakio salanumero, arvo 20
	int luku;                 //kokonaislukumuuttuja luku, arvo määrittelemätön
	
	printf("Anna numero");  //pyydetään käyttäjää syöttämään numero
	scanf("%i", &luku);
	
	if(luku == salanumero)
	  printf("Arvasit oikein");
	else
	  printf("Arvasit vaarin");
	  
	getch();
	return 0;
}
