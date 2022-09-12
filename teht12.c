#include <stdio.h>

int main()
{
	int luku1;  //kokonaislukumuuttuja luku1, arvo ei määritelty
	printf("Anna pistemaara 0-100\n");    //käyttäjää pyydetään antamaan pistemäärä 0-100 väliltä
	scanf("%i", &luku1);                       //haetaan tiedot näppäimistöltä
	
	if(luku1 >=0 && luku1 <30)
	  printf("Arvosana on 0\n");     //jos syötetty pistemäärä on 0-29 tulostetaan "arvosana on 0"
    
	else if(luku1 >=30 && luku1 <53)
	    printf("Arvosana on 1\n");     //jos syötetty pistemäärä on 30-52 tulostetaan "arvosana on 1"
	  
	else if(luku1 >=53 && luku1 <76)
	      printf("Arvosana on 2\n");     //jos syötetty pistemäärä on 53-76 tulostetaan "arvosana on 2"
	
    else if(luku1 >= 76 && luku1 <= 100)
	   printf("Arvosana on 3\n");      //jos syötetty pistemäärä on 76-100 tulostetaan "arvosana on 3"
	    
	else
	  printf("Arvosanaa ei voi maaritella\n");  //jos syötetty pistemäärä ei ole väliltä 0-100 tulostetaan "arvosanaa ei voi määritellä"
	  
	//getch();
	return 0;
 }
