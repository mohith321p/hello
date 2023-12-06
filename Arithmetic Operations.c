#include<stdio.h>
int main() {
int a,b;
printf("enter two values: ");
scanf("%d%d",&a,&b);
printf("Addition: %d",a+b);
printf("\nDifference: %d",a-b);
printf("\nProduct: %d",a*b);
printf("\nDivision:");
printf("\nQuotient: %d, Remainider: %d",a/b,a%b);
}