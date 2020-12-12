#include<stdio.h>
#include<math.h>
void main()
{
int a,b,c,d=0,root1=0,root2=0,x=0,y=0;
printf("ENTER A,B,C OF QUADRATIC EQN:\t");
scanf("%d%d%d",&a,&b,&c);
d=b*b-4*a*c;
if(a!=0)
{
	{
	if(d>0)
	root1=((-1*b)+sqrt(d))/(2*a);
	root2=((-1*b)-sqrt(d))/(2*a);
	}
        if(d<0)
	{
	d=4*a*c-b*b;
	x=(-1*b)/(2*a);
	root1=sqrt(d)/(2*a);
	y=(-1*b)/(2*a);
	root2=sqrt(d)/(2*a);	
	printf("THE ROOTS ARE:%d+i%d",x,root1);
	printf("%d+i%d",y,root2);
	}
	if(d==0)
	{
	root1=(-1*b)/(2*a);
	root2=root1;
	}
}
else
{
     printf("ITS NOT A QUADRATIC EQN");
}
printf("THE ROOTS ARE:%d",root1);
printf("THE ROOTS ARE:%d",root2);
}
