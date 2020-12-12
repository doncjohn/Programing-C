#include<stdio.h>
void main()
{
int n,i,big,small,a;
printf("ENTER THE LIMIT\n");
scanf("%d",&n);
printf("ENTER THE FIRST NUMBER\n");
scanf("%d",&a);
big=a;
small=a;
printf("ENTER REST OF THE NUMBERS");
for(i=0;i<n;i++)
{

scanf("%d",&a);
if(a>big)
big=a;
if(a<small)
small=a;
}
printf("BIGGEST NUMBER IS %d\nSMALLEST NUMBER IS%d\n",big,small);
}
