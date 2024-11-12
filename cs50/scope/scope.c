#include <stdio.h>

int add(int a, int b);
int main(void)
{
	int a, b;
	printf("enter a number: ");
	scanf("%i", &a);
	printf("enter a second number: ");
	scanf("%i", &b);
	printf("%i\n",add(a, b));
}
int add(int x, int y)
{
	return x + y;	
}
