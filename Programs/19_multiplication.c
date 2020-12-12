#include<stdio.h>
void main()
{
int n,a,i;
printf("\nENTER THE NUMBER\n");
scanf("%d",&n);
printf("\nENTER THE LIMIT\n");
scanf("%d",&a);
for(i=1;i<=a;i++)
printf("\n%d * %d = %d\n",i,n,i*n);
}
