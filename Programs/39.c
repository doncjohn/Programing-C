#include<stdio.h>
#include<stdlib.h>
void main()
{
int i,j,n;
char c;
do{
system("clear");
printf("\nSERIES 2 :} \n");
printf("\nENTER THE LIMIT : ");
scanf(" %d",&n);

for(i=n;i!=0;i--)
{
for(j=0;j<n-i;j++)
{
printf(" ");
}
for(j=i;j!=0;j--)
{
printf("%d",j);
}
printf("\n");
}


printf("\nDO YOU WANT TO CONTINUE [Y/N] : ");
scanf(" %c",&c);
}while(c=='y'||c=='Y');
}
