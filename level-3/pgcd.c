#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
	if (argc != 3)
	{
		printf("\n");
		return (0);
	}
	int a = atoi(argv[1]);
	int b = atoi(argv[2]);

	int hcd = 1;
	int result = 0;
	while(hcd <= a && hcd <= b)
	{
		if (a % hcd == 0 && b % hcd == 0)
			result = hcd;
		hcd++;
	}
	
	printf("%d\n", result);
}