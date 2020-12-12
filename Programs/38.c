#include<stdio.h>
#include<stdlib.h>
void main()
{
int i,j,n;
char c;
do{
system("clear");

printf("\nSERIES 1 :} \n");
printf("\nENTER THE LIMIT : ");
scanf(" %d",&n);

for(i=1;i<=n;i++)
{for(j=1;j<=i;j++){
printf(" %d ",j);}printf("\n");
}


printf("DO YOU WANT TO CONTINUE [Y/N] : ");
scanf(" %c",&c);
}while(c=='y'||c=='Y');
}
