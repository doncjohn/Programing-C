#include <stdio.h>
void main()
{
  int a,b,i,check=1,j;
  printf("ENTER THE LOWER LIMIT");
  scanf("%d",&a);
  printf("\n ENTER THE UPPER LIMIT");
  scanf("%d",&b);
  for(i=a+1;i<=b;i++)
  {
	  check=0;
	  for(j=2;j<=i/2;j++)
	  {
		  if(i%j==0)
		  {
			  printf("%d NOT A PRIME NUMBER \n",i);
			  check=1;
			  break;
		  }
       }
      
      if(check==0)
          {
	          printf("%d IS A PRIME NUMBER\n",i);
	       }
   }
}
	  
