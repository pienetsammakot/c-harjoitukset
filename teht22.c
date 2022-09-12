#include <stdio.h>
int jakolasku(int luku);

int main()
{
  int paluuarvo, jaettava;
  
  printf("\nAnna jaettava luku:\n");
  scanf("%i", &jaettava);

  paluuarvo = jakolasku(jaettava);
  printf("\nFunktio palautti %i\n", paluuarvo);
  
  getch();
  return 0;
}
		
int jakolasku(int luku)
{
  int tulos;
  tulos = luku / 2;
  return tulos;
}
