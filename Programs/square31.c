//square of numbers in a range

#include <stdio.h>
void main()
{
  int a,b,i;
  printf("ENTER THE LOWER LIMIT");
  scanf("%d",&a);
  printf("\nENTER THE UPPER LIMIT");
  scanf("%d",&b);


  for(i=a;i<=b;i++)
  {
      printf("\nTHE SQUARE OF %d IS: ",i);
      printf("%d",(i*i));
  }


}
