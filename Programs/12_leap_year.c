#include<stdio.h>
void main()
{
int year;
printf("\n ENTER A YEAR\n");
scanf("%d",&year);
if(year%4==0)
printf("%d IS A LEAP YEAR\n",year);
else
printf("%d IS NOT A LEAP YEAR\n",year);
}
