#include<stdio.h>
int main()
{
 float perimeter,area,l,b;
 printf("Enter length of rectangle: ");
 scanf("%f",&l);
 printf("Enter breath of rectangle: ");
 scanf("%f",&b);
 perimeter=2*(l+b);
 area=l*b;
 printf("Perimeter of rectangle: %.2f\n",perimeter);
 printf("Area of rectangle: %.2f",area); 	
}


