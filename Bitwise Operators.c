#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void calculate_the_maximum(int n, int k) {
    int i,j;
    int m1=0,m2=0,m3=0;
    for(i=1;i<=n;i++)
    for(j=i+1;j<=n;j++)
    {
        if((i&j)<k&&(i&j)>m1)
        m1=i&j;
        if((i|j)<k&&(i|j)>m2)
        m2=i|j;
       if((i^j)<k&&(i^j)>m3)
        m3=i^j; 
    }
    printf("%d\n%d\n%d",m1,m2,m3);
    
}


int main() { 
int n, k;
scanf("%d %d", &n, &k);
 calculate_the_maximum(n, k);
}
