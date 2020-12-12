#include<stdio.h>
void main()
{
int i,j,k;
for(i=1;i<=5;i=i+2)
{
for(j=5;j>i;j=j-2)
{
printf("%s"," ");
}
for(k=0;k<i;k++)
{
printf("%s","*");
}
printf("\n");
}
}
