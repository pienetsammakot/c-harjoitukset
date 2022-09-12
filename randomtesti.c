#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main ()
{
	int lkm[105]={0};
	int data[105]={0};
	int a=0;
	long toistot=0;
	long i=0;
	int x=0;
	int b=0;
	int minlkm=65535;
	int maxlkm=0;
	int minnumero=0;
	int maxnumero=0;
	int min=0;
	int max=0;
	int min_counter=0;
	int max_counter=0;
	srand (time(NULL));
	printf("\nAnna toistojen lkm 1-10000: ");
	scanf("%ld", &toistot);
	while(toistot<1 || toistot>10000)
	{
		printf("\nLuku on virheellinen. Anna uusi arvo 1-10000 ");
		scanf("%ld", &toistot);
	}
	for(i=0; i<=toistot; i++)
	{
		x=rand() % 100;
		x=x+1;
		lkm[x]++;
	}
	for(i=1; i<=100; i++)
	{
		printf("\nNumeroa %ld arvottiin %d kertaa.", i, lkm[i]);
		if(minlkm>=lkm[i])
		{
			minlkm=lkm[i];
			minnumero=i;
		}
		if(maxlkm<=lkm[i])
		{
			maxlkm=lkm[i];
			maxnumero=i;
		}
	}
	printf("\nNumero jota arvottiin vahiten on %d ja sita arvottiin %d kertaa.", minnumero, minlkm);
	printf("\nNumero jota arvottiin eniten on %d ja sita arvottiin %d kertaa.", maxnumero, maxlkm);

    min=minnumero;
    max=maxnumero;
    min_counter=minlkm;
    max_counter=maxlkm;
	
	for(i=0; i<=maxlkm; i++)
			{
		if(lkm[i]>=min_counter)
		{
					for(i=0; i<=maxlkm; i++)
{
			a++;
			data[a]=lkm[i];
			min_counter++;
		}
	}
	}
	for(i=0; i<=100; i++)
	{
		printf("\nSolun nro %d arvo on %d", i, data[i]);
	}
}
