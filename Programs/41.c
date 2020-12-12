#include<stdio.h>
#include<stdlib.h>
void main()
{
int i,a,b,gcd,lcm;
char c;
do{
system("clear");

printf("\nLEAST COMMON MULTIPLE OF 2 NUMBERS :} \n");
printf("\nENTER TWO NUMBERS : ");
scanf("\n%d%d",&a,&b);

for(i=1;i<=a&&i<=b;i++)
{
if(a%i==0&&b%i==0)
{ gcd = i; }
}
lcm=(a*b)/gcd;
printf("LEAST COMMON MULTIPLE OF %d , %d IS : %d ",a,b,lcm);

printf("\nDO YOU WANT TO CONTINUE [Y/N] : ");
scanf(" %c",&c);
}while(c=='y'||c=='Y');
}
