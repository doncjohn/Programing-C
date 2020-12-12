#include<stdio.h>
#include<stdlib.h>
void main()
{
int i,j,l,u;
char c;
do{
system("clear");

printf("\nPRIME NUMBERS IN A INTERVEL :} \n");
printf("\nENTER THE LOWER LIMIT : ");
scanf(" %d",&l);
printf("\nENTER THE UPPER LIMIT : ");
scanf(" %d",&u);

for(i=l;i<=u;i++)
{
for(j=2;j<i;j++)
{if(i%j==0){ break;}
 else{printf(" %d\n",i);break;}
}if(i==2){printf(" 2\n");}
}


printf("DO YOU WANT TO CONTINUE [Y/N] : ");
scanf(" %c",&c);
}while(c=='y'||c=='Y');
}
