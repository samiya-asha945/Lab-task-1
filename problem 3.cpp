#include<stdio.h>
#include<conio.h>

main()
{
	float fr,cen;
	
	
	printf("Enter The temp (F):");
	scanf("%f",&fr);
	
	
	
cen = 5.0/9.0*(fr-32);
	
	
	printf("The temp in cent: %.2f",cen);
	
	
	getch();

}
