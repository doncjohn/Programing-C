#include<stdio.h>
#include<stdlib.h>
void main()
{
int i,a,b,gcd;
char c;
do{
system("clear");

printf("\nGREATEST COMMON DIVISOR OF 2 NUMBERS :} \n");
printf("\nENTER TWO NUMBERS : ");
scanf("\n%d%d",&a,&b);

for(i=1;i<=a&&i<=b;i++)
{
if(a%i==0&&b%i==0)
{ gcd = i; }
}
printf("GREATEST COMMON DIVISOR OF %d , %d IS : %d ",a,b,gcd);

printf("\nDO YOU WANT TO CONTINUE [Y/N] : ");
scanf(" %c",&c);
}while(c=='y'||c=='Y');
}
