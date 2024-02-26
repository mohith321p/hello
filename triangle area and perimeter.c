#include<stdio.h>
int main()
{
	float perimeter,area,b,h;
	printf("Enter base: ");
	scanf("%f",&b);
	printf("Enter height: ");
	scanf("%f",&h);
 perimeter=b+2*h;
	area=0.5*b*h;
 printf("Perimeter of triangle=%.2f\n",perimeter);
	printf("Area of triangle=%.2f",area);
}