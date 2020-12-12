#include<stdio.h>
void main()
{
int a,b,c;
printf("ENTER 3 NUMBERS\n");
scanf("%d%d%d",&a,&b,&c);
if((a>b)&&(a>c))
printf("%d IS GREATEST\n",a);
else if((b>a)&&(b>c))
printf("%d IS GREATEST\n",b);
else 
printf("%d IS GREATEST\n",c);
}
