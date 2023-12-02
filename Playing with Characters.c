#include<stdio.h>
int main() {
    char c,s[100],sen[100];
    scanf("%c",&c);
    scanf("%s",s);
    scanf("\n");
    scanf("%[^\n]%*c",sen);
    printf("%c",c);
    printf("\n%s\n",s);
   printf("%s",sen);
    
}