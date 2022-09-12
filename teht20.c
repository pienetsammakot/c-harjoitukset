#include <stdio.h>

int main(void) 
{
  float luku1, luku2, luku3;
  char vastaus;
  do
  { 
    printf ("\Rinnankytkennan laskukone");
    printf ("\nAnna kolmen vastuksen arvot:");
    scanf ("%f %f %f", &luku1, &luku2, &luku3);
    printf ("Tulos on: %.2f", 1/((1/luku1)+(1/luku2)+(1/luku3)));
    printf ("\nJatketaanko (k/e): ");
    vastaus = getche();
  }while (vastaus != 27);
} 
