#include <stdio.h>

int main()
{
	int luku1;  //kokonaislukumuuttuja luku1, arvo ei m��ritelty
	printf("Anna pistemaara 0-100\n");    //k�ytt�j�� pyydet��n antamaan pistem��r� 0-100 v�lilt�
	scanf("%i", &luku1);                       //haetaan tiedot n�pp�imist�lt�
	
	if(luku1 >=0 && luku1 <30)
	  printf("Arvosana on 0\n");     //jos sy�tetty pistem��r� on 0-29 tulostetaan "arvosana on 0"
    
	else if(luku1 >=30 && luku1 <53)
	    printf("Arvosana on 1\n");     //jos sy�tetty pistem��r� on 30-52 tulostetaan "arvosana on 1"
	  
	else if(luku1 >=53 && luku1 <76)
	      printf("Arvosana on 2\n");     //jos sy�tetty pistem��r� on 53-76 tulostetaan "arvosana on 2"
	
    else if(luku1 >= 76 && luku1 <= 100)
	   printf("Arvosana on 3\n");      //jos sy�tetty pistem��r� on 76-100 tulostetaan "arvosana on 3"
	    
	else
	  printf("Arvosanaa ei voi maaritella\n");  //jos sy�tetty pistem��r� ei ole v�lilt� 0-100 tulostetaan "arvosanaa ei voi m��ritell�"
	  
	//getch();
	return 0;
 }
