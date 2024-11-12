#include<stdio.h>
#include<string.h>
//linear search
int main(void)
{
	int numbers[6] = {8, 15, 16, 23, 42, 50};
	for(int i = 0; i < 6; i++)
	{
		if(numbers[i] == 50)
		{
			printf("found\n");
		}
		else
		{
		 	printf("not found\n");
		}
	}
	/*
	char names[33] = {"issa", "qli", "bello", "suliman"};
	for(int i = 0; i <= 33; i++)
	{
		if(names[i] == 6)
		{
			printf("%s\n", names);
		
		}
*/	
}

//printf("found\n");
