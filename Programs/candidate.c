#include<stdio.h>
void main()
{
int n,i;
struct cand
{
	char name[60];
	int age;
}c[n];
printf("ENTER THE NO.OF CANDIDATES:\t");
scanf("%d",&n);
for(i=0;i<n;i++)
{
	printf("ENTER THE NAME OF THE CANDIDATE:\t");
	scanf(" %[^\n]s",c[i].name);
	printf("\nENTER THE AGE OF THE CANDIDATE:\t");
	scanf("%d",&c[i].age);
}
for(i=0;i<n;i++)	
{
	if(c[i].age<18)
		printf(" %s IS NOT ELIGIBLE!!",c[i].name[60]);
}
}
