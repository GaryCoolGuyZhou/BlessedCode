#include <stdio.h>

int main(int argc, const char *argv[])
{
	int x;
	int y;
	int result;
	int remainder;

	printf("divider: ");
	scanf("%d",&x);
	printf("divisor: ");
	scanf("%d",&y);
	result = x / y;
	remainder = x % y;
	if ( remainder == 0 && result >= 1)
		{ 
			printf("Yes \n");	}
	else
	{
		printf("No \n");}
	return 0;
}
		
		
		
