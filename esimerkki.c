#include <stdio.h>

int main()
{
	const int salanumero=20;   //kokonaislukuvakio salanumero, arvo 20
	int luku;                 //kokonaislukumuuttuja luku, arvo m��rittelem�t�n
	
	printf("Anna numero");  //pyydet��n k�ytt�j�� sy�tt�m��n numero
	scanf("%i", &luku);
	
	if(luku == salanumero)
	  printf("Arvasit oikein");
	else
	  printf("Arvasit vaarin");
	  
	getch();
	return 0;
}
