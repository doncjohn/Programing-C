
#include <stdio.h>
void main()
{
	int a,rev=0,no,number;
	printf("ENTER A NUMBER TO FIND PALINDROME");
	scanf("%d",&a);
	number=a;
	while(number>0)
	{
		no=number%10;
		rev=rev*10+no;
		number=number/10;
	}
		if(rev==a)
	
		printf("THE ENTERED NUMBER IS PALINDROME");
	else
	 
		printf("THE NUMBER ENTERED IS NOT A PALINDROME");
		
}


