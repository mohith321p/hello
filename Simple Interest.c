#include<stdio.h>
int main()
{
	float p,r,t,si;
	printf("Enter principle: ");
	scanf("%f",&p);
	printf("Enter rate of interest: ");
	scanf("%f",&r);	
	printf("Enter time: ");
	scanf("%f",&t);
	si=(p*t*r)/100;
	printf("Simple Interest= %.2f",si);
}