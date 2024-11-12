#include <stdio.h>

int main() 
{
    
    int rows;
	int i,j;
	do
	{
    		printf("Enter the number of rows: ");
    		scanf("%d", &rows);
	}	
	while(rows<1 || rows>8);

    for (int i = 1; i <= rows; i++) 
    {
        for (int j = rows; j >= 1; j--) 
	{
		if(i>=j)
		{
            		printf("*");
		}	
		else
		{
			printf(" ");
		}
	    
        }
        printf("\n");
    }

    return 0;
}


