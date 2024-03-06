#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter two numbers: ");
    scanf("%d%d",&a,&b)
    printf("Before swapping: \n");
    printf("a=%d and b=%d\n",a,b);
    c=a;
    a=b;
    b=c;
    printf("After swapping: \n");
    printf("a=%d and b=%d\n",a,b);	
}
