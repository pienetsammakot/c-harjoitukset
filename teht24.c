#include <stdio.h>
int aliohjelma(int taulukko2[6]);

int main()
{
  int taulukko[2][3] = {  {1,2,3},
                          {4,5,6}	};
  int taulukko2[6];
  int rivi, sarake;
  
  for(rivi=0; rivi <=2; rivi++)
  {
  	for(sarake=0; sarake <=2; sarake++)
  	{
  		taulukko2[rivi] = taulukko[0][sarake];
	  }
  }
  
  for(rivi=3; rivi <=5; rivi++)
  {
  	for(sarake=0; sarake<=2; sarake++)
  	{
  		taulukko2[rivi] = taulukko[1][sarake];
	  }
  }
  
  aliohjelma(taulukko);

  getch();
  return 0;
}

int aliohjelma(int taulukko2[6])
{
  printf("Aliohjelmassa \n\n");
  printf("%i \n %i \n %i \n %i \n %i \n %i \n", taulukko2[0], taulukko2[1], taulukko2[2], taulukko2[3], taulukko2[4], taulukko2[5]);
  return 0;
}
