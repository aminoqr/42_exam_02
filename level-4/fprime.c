#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
	if (argc != 2)
		{
			printf("\n");
			return 0;
		}
	int num = atoi(argv[1]);

	int factor = 2;
	while(num > 1)
	{
		if (num % factor == 0)
		{
			printf("%d", factor);
			num /= factor;
			if (num != 1)
				printf("*");				
			factor = 2;
		}
		else
			factor++;
	}
	printf("\n");
	return (0);
	
}