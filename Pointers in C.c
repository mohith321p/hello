#include <stdio.h>
void update (int *a, int *b) {
}
int main() {
int a, b;
int *pa = &a, *pb = &b;
scanf("%d %d", &a, &b);
update (pa, pb);
printf("%d\n", *pa+*pb);
if(a>b)
printf("%d",*pa-*pb);
if(a<b)
printf("%d", *pb-*pa);
return 0;
}