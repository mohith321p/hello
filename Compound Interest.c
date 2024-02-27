#include<stdio.h>
#include<math.h>
int main()
{
	float p,r,t,ci;
	printf("Enter principle: ");
	scanf("%f",&p);
	printf("Enter rate of interest: ");
	scanf("%f",&r);	
	printf("Enter time: ");
	scanf("%f",&t);
	ci=p*pow((1+r),t)-p;
	printf("compound Interest= %.2f",ci);
}