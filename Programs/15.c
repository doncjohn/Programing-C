#include <stdio.h>
void main()
{
	int a,b,c;
	printf("ENTER THREE NUMBERS\n");
	scanf("%d%d%d",&a,&b,&c);
	if(a>b && a>c)
	{
	printf("%d IS GREATER",a);
	}
	else if(b>a&& b>c)
	{			
	printf("%d IS GREATER",c=b);
	}
	else
	{
	printf("%d  IS GREATER OF THE THREE\n",c);
	}
}
