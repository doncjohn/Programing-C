#include<stdio.h>
void main()
{
    int amstrong=0,no,number,no1;
	printf("ENTER A NUMBER TO IT IS AMSTRONG??   ");
	scanf("%d",&no);
	number=no;
	while(no>0)
	{
		no1=no%10;
		amstrong=amstrong+(no1*no1*no1);
		no=no/10;
	}
	if(amstrong==number)
	    printf("THE ENTERED NUMBER IS AMSTRONG NUMBER");
	else
		printf("SORRY!!!! NOT A  AMSTRONG NUMBER");
		
     
 }
	
