
#include <stdio.h>
int laske(float lista[]);
const int MAX = 5;

int main()
{
  int counter = 0;
  float lista[5], yhteispisteet;
  do
  {
    printf("Anna %i. pisteet: \n", counter +1);
    scanf("%f", &lista[counter++] );
  }
  while (counter < MAX);
  yhteispisteet = laske(lista);
  
  printf("\nYhteispisteet ovat: %.2f\n", yhteispisteet/1000);

  getch();
  return 0;
}

int laske(float lista[5])
{
   int rivi;
   float tulos=0;
   for (rivi=0; rivi< MAX; rivi++)
   {
     tulos = tulos + lista[rivi];
   }
   tulos = tulos * 1000;
   return tulos;
}

