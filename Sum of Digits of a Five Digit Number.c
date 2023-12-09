#include<stdio.h>
int main() {
int sum=0,r,n,i;
scanf("%d",&n);
if(n>9999&&n<100000)
for(i=0;n!=0;i++)
{
r=n%10;
n=n/10;
sum=sum+r;
}
printf("%d",sum);
}