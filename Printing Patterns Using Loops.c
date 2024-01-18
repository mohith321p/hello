#include<stdio.h>
int main() {
int i,j,n;
scanf("%d",&n);
for (i=n;i>0;i--)
    { 
        for(j=n;j>i;j--)
        printf("%d ",j);
        for(j=1;j<=2*i-1;j++)
        printf("%d ",i);
        for(j=i+1;j<=n;j++)
        printf("%d ",j);
        printf("\n");
    }
for (i=2;i<=n;i++)
    { 
        for(j=n;j>i;j--)
        printf("%d ",j);
        for(j=1;j<=2*i-1;j++)
        printf("%d ",i);
        for(j=i+1;j<=n;j++)
        printf("%d ",j);
        printf("\n");
    }
}    