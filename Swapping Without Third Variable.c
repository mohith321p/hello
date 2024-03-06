#include<stdio.h>
int main()
{
	int a,b;
    printf("Enter two numbers: ");
    scanf("%d%d",&a,&b);
	printf("Before swapping: \n");
    printf("a=%d and b=%d\n",a,b);
	a=a+b;
	b=a-b;
	a=a-b;
printf("After swapping: \n");
printf("a=%d and b=%d\n",a,b);	
}