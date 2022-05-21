#include<stdio.h>
int main()
{
	float fa,ce;

	printf("Enter temperature of city in fahrenheit:");
	scanf("%f",&fa);
	ce=(fa-32)*5/9;
	printf("Temperature:%f ",ce);

	return 0;
}

