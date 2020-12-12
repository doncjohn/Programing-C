#include<stdio.h>
#include<stdlib.h>
void main()
{
long fact(int a);
int i,j,n;
char c;
do{
system("clear");
printf("ENTER THE LIMIT : ");
scanf("%d",&n);


for(i=0;i<n;i++){

for(j=0;j<n-i-1;j++)
printf(" ");
 
for(j=0;j<=i;j++)
{printf("%ld ",fact(i)/(fact(j)*fact(i-j))); }
printf("\n"); }

printf("DO YOU WANT TO CONTINUE [Y/N] : ");
scanf(" %c",&c);
}while(c=='y'||c=='Y');
}

long fact(int a){
long f=1;
int i=1;
while(i<=a){
f=f*i; i++;
}
return f;
}
