#include <stdio.h>

int main(void)
{
	int n;
	printf("size: ");
	scanf("%i", &n);
	while(n < 1)
	{
		printf("size: ");
		scanf("%i", &n);
	}
	
			for(int i = 0; i<n; i++)
			{
				for(int i = 0; i<n; i++)
				{
					printf("#");
				}	
		printf("\n");
			}
	
}
