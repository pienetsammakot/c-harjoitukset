#include <stdio.h>

int main()
{
  char ch;

  printf("**** Paavalikko ****\n");
  printf("1. Kolmen vastuksen sarjakytkenta\n");
  printf("2. Kolmen vastuksen rinnankytkenta\n");
  printf("3. Virranlasku\n\n");
  printf("Valinta\n");

  ch = getchar();
  float arvo1, arvo2, arvo3, tulos;

  switch(ch)
  {
    case '1':
      printf("\nAnna vastuksen 1 arvo:");
	  scanf("%f", &arvo1);
	  printf("\nAnna vastuksen 2 arvo:");
	  scanf("%f", &arvo2);
	  printf("\nAnna vastuksen 3 arvo:");
	  scanf("%f", &arvo3);
	  
	  tulos = arvo1 + arvo2 + arvo3;
	  
	  printf("Sarjakytkennan tulos:\n");
	  printf("%.2f", tulos);
	  
    break;

    case '2':
      printf("\nAnna vastuksen 1 arvo:");
	  scanf("%f", &arvo1);
	  printf("\nAnna vastuksen 2 arvo:");
	  scanf("%f", &arvo2);
	  printf("\nAnna vastuksen 3 arvo:");
	  scanf("%f", &arvo3);
	  
	  tulos = 1 / ((1 / arvo1) + (1 / arvo2) + (1 / arvo3));
	  
	  printf("Rinnankytkennan tulos:\n");
	  printf("%.2f", tulos);    
	
	break;

    case '3':
      printf("\nAnna jannitteen 1 arvo:");
	  scanf("%f", &arvo1);
	  printf("\nAnna jannitteen 2 arvo:");
	  scanf("%f", &arvo2);
	  printf("\nAnna vastuksen arvo:");
	  scanf("%f", &arvo3);
	  
	  tulos = (arvo1 + arvo2) / arvo3;
	  
	  printf("\nVirta on %.2f", tulos);
	  
    break;

    default:
      printf("\nEn ole olemassa\n");
  }
  getch();
  return 0;
}

