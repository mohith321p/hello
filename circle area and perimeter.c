#include<stdio.h>
int main()
{
	float area,perimeter,r;
	printf("Enter radius of circle: ");
	scanf("%f",&r);
    perimeter=2*3.14*r;
	area=3.14*r*r;
    printf("perimeter of circle=%.2f\n",perimeter);
	printf("Area of circle=%.2f",area);
}