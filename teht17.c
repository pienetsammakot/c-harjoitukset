#include <stdio.h>

int oppilas2();
int oppilas3();

int main()
{
	int sarake, numerot[3][6];
	char nimi1[50], nimi2[50], nimi3[50];
	
	puts("Opiskelijan 1 nimi:\n");
	gets(nimi1);
	fflush(stdin);
	
    for(sarake=0; sarake<=3; sarake++)
	{
			printf("Anna pisteet 0-25:\n");
			scanf("%i", &numerot[0][sarake]);
	}
	
	numerot[0][4] = 0;
	
	for(sarake=0; sarake<=3; sarake++)
	{
		numerot[0][4] = numerot[0][4] + numerot[0][sarake];
	}
	
	if(numerot[0][4] >=0 && numerot[0][4] <30)
	   numerot[0][5] =0;     
    
	else if(numerot[0][4] >=30 && numerot[0][4] <53)
	   numerot[0][5] =1;     
	  
	else if(numerot[0][4] >=53 && numerot[0][4] <76)
	   numerot[0][5] =2;     
	
    else if(numerot[0][4] >= 76 && numerot[0][4] <= 100)
	   numerot[0][5] =3;     
	    
	else
	  printf("Arvosanaa ei voi maaritella\n");
	  
	printf("Opiskelijan 1 nimi on %s \n", nimi1);
	
	for(sarake = 0; sarake <=3; sarake++)
	{
		printf("%i \n", numerot[0][sarake]);
	}
	
	printf("\nYhteispisteet:\n%i", numerot[0][4]);
	printf("\nArvosana on: \n%i", numerot[0][5]);
	
	fflush(stdin);
	puts("\nOpiskelijan 2 nimi:\n");
	gets(nimi2);
	fflush(stdin);
		
	for(sarake=0; sarake<=3; sarake++)
	{
			printf("Anna pisteet 0-25:\n");
			scanf("%i", &numerot[1][sarake]);
	}
	
	numerot[1][4] = 0;
	
	for(sarake=0; sarake<=3; sarake++)
	{
		numerot[1][4] = numerot[1][4] + numerot[1][sarake];
	}
	
	if(numerot[1][4] >=0 && numerot[1][4] <30)
	   numerot[1][5] =0;     
    
	else if(numerot[1][4] >=30 && numerot[1][4] <53)
	   numerot[1][5] =1;     
	  
	else if(numerot[1][4] >=53 && numerot[1][4] <76)
	   numerot[1][5] =2;     
	
    else if(numerot[1][4] >= 76 && numerot[1][4] <= 100)
	   numerot[1][5] =3;     
	    
	else
	  printf("Arvosanaa ei voi maaritella\n");
	  
	printf("\nOpiskelijan 2 nimi on %s \n", nimi2);
	
	for(sarake = 0; sarake <=3; sarake++)
	{
		printf("%i \n", numerot[1][sarake]);
	}
	
	printf("\nYhteispisteet:\n %i", numerot[1][4]);
	printf("\nArvosana on: \n %i", numerot[1][5]);
	
	fflush(stdin);
	puts("\nOpiskelijan 3 nimi:\n");
	gets(nimi3);
	fflush(stdin);
		
	for(sarake=0; sarake<=3; sarake++)
	{
			printf("Anna pisteet 0-25:\n");
			scanf("%i", &numerot[2][sarake]);
	}
		
	numerot[2][4] = 0;
	
	for(sarake=0; sarake<=3; sarake++)
	{
		numerot[2][4] = numerot[2][4] + numerot[2][sarake];
	}
	
	if(numerot[2][4] >=0 && numerot[2][4] <30)
	   numerot[2][5] =0;     
    
	else if(numerot[2][4] >=30 && numerot[2][4] <53)
	   numerot[2][5] =1;     
	  
	else if(numerot[2][4] >=53 && numerot[2][4] <76)
	   numerot[2][5] =2;     
	
    else if(numerot[2][4] >= 76 && numerot[2][4] <= 100)
	   numerot[2][5] =3;     
	    
	else
	  printf("Arvosanaa ei voi maaritella\n");
	  
	printf("\nOpiskelijan 3 nimi on %s \n", nimi3);
	
	for(sarake = 0; sarake <=3; sarake++)
	{
		printf("%i \n", numerot[2][sarake]);
	}
	
	printf("\nYhteispisteet:\n %i", numerot[2][4]);
	printf("\nArvosana on: \n %i", numerot[2][5]);
	
	getch();
	return 0;
}
