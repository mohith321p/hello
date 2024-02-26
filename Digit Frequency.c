#include<stdio.h>
#include<string.h>
int main() {
int i,j,l,t;
char s[1000];
scanf("%s",s);
l=strlen(s);
for(i='0';i<='9';i++) {
t=0;
for(j=0;j<=l;j++)
if(s[j]==i)
t++;
printf("%d ",t);}
}