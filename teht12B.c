#include <stdio.h>

int main()
{
	float numerot[3][6];
	char nimi1[50], nimi2[50], nimi3[50];
	
	puts("Opiskelijan nimi:\n");
	gets(nimi1);
	fflush(stdin);
	
	puts("Opiskelijan nimi:\n");
	gets(nimi2);
	fflush(stdin);
	
	puts("Opiskelijan nimi:\n");
	gets(nimi3);
	fflush(stdin);
	
	printf("Anna oppilaan 1 pisteet 0-25: \n");
	scanf("%f", &numerot[0][0]);
	printf("Anna oppilaan 1 pisteet 0-25: \n");
	scanf("%f", &numerot[0][1]);
	printf("Anna oppilaan 1 pisteet 0-25: \n");
	scanf("%f", &numerot[0][2]);
	printf("Anna oppilaan 1 pisteet 0-25: \n");
	scanf("%f", &numerot[0][3]);
	
	printf("Anna oppilaan 2 pisteet 0-25: \n");
	scanf("%f", &numerot[1][0]);
	printf("Anna oppilaan 2 pisteet 0-25: \n");
	scanf("%f", &numerot[1][1]);
	printf("Anna oppilaan 2 pisteet 0-25: \n");
	scanf("%f", &numerot[1][2]);
	printf("Anna oppilaan 2 pisteet 0-25: \n");
	scanf("%f", &numerot[1][3]);
	
	printf("Anna oppilaan 3 pisteet 0-25: \n");
	scanf("%f", &numerot[2][0]);
	printf("Anna oppilaan 3 pisteet 0-25: \n");
	scanf("%f", &numerot[2][1]);
	printf("Anna oppilaan 3 pisteet 0-25: \n");
	scanf("%f", &numerot[2][2]);
	printf("Anna oppilaan 3 pisteet 0-25: \n");
	scanf("%f", &numerot[2][3]);
	
	numerot[0][4] = numerot[0][0] + numerot[0][1] + numerot[0][2] + numerot[0][3];
	
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
	  
	numerot[1][4] = numerot[1][0] + numerot[1][1] + numerot[1][2] + numerot[1][3];
	
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
	  
	numerot[2][4] = numerot[2][0] + numerot[2][1] + numerot[2][2] + numerot[2][3];
	
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
	
	printf("\n%sn koepisteet: \n %.1f %.1f %.1f %.1f \n", nimi1, numerot[0][0], numerot[0][1], 
	        numerot[0][2], numerot[0][3]);
	printf("%sn yhteispisteet:\n %.1f \n", nimi1, numerot[0][4]);
	printf("%sn arvosana:\n %.1f \n", nimi1, numerot[0][5]);
	printf("%sn koepisteet: \n %.1f %.1f %.1f %.1f \n", nimi2, numerot[1][0], numerot[1][1], 
	        numerot[1][2], numerot[1][3]);
	printf("%sn yhteispisteet: \n %.1f \n", nimi2, numerot[1][4]);
	printf("%sn arvosana:\n %.1f \n", nimi2, numerot[1][5]);
	printf("%sn koepisteet: \n %.1f %.1f %.1f %.1f \n", nimi3, numerot[2][0], numerot[2][1], 
	        numerot[2][2], numerot[2][3]);
	printf("%s yhteispisteet: \n %.1f \n", nimi3, numerot[2][4]);
	printf("%sn arvosana:\n %.1f \n", nimi3, numerot[2][5]);
	
	getch();
	return 0;
}
