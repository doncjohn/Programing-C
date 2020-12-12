#include<stdio.h>
#include<math.h>
#include<stdlib.h>
void main()
{
int a,b,c,d=1;
while(d)
{
system("clear");
printf("\nENTER 2 NUMBERS\n");
scanf("%d%d",&a,&b);
printf("\nENTER 1 FOR ADDITION\n2 FOR SUBSTRACTION\n3 FOR MULTIPLICATION\n4 FOR DIVION\n5 FOR EXPONENT\n");
scanf("%d",&c);
switch(c)
{
case 1:
printf("%d+%d=%d",a,b,a+b);
break;
case 2:
printf("%d-%d=%d",a,b,a-b);
break;
case 3:
printf("%d*%d=%d",a,b,a*b);
break;
case 4:

printf("%d/%d=%f",a,b,(float)a/b);
break;
case 5:
printf("%d^%d=%f",a,b,(pow(a,b)));
break;
default:
printf("\nTHIS CALCULATOR IS NOT ENOUGH FOR YOUR NEED\n");
}
printf("\nDO YOU WANT TO CONTINUE \n IF YES ENTER 1\n IF NO ENTER 0\n");
scanf("%d",&d);
}
}
