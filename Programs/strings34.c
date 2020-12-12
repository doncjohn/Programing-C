#include <stdio.h>
#include <string.h>
void main()
{
	char str[100];
	int l;
	printf("ENTER THE STRING   ");
	gets(str);
	l=(int)strlen(str);
    printf("THE LENGTH OF A STRING IS %d",l);
}
