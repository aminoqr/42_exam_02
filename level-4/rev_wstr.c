#include <unistd.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
	if (argc != 2)
	{
		write(1, "\n", 1);
		return 0;
	}
	
	int len = 0;
	while (argv[1][len])
		len++;
	int i;
	while(len >= 1)
	{
		if (argv[1][len - 1] == ' ' || argv[1][len - 1] == '\t')
		{
			i = len;
			while(argv[1][i] && (argv[1][i] != ' ' && argv[1][i] != '\t'))
			{
				write(1, &argv[1][i], 1);
				i++;
			}
			write(1, " ", 1);
		}
		else if (len == 1)
		{
			i = 0;
			while(argv[1][i] && (argv[1][i] != ' ' && argv[1][i] != '\t'))
			{
				write(1, &argv[1][i], 1);
				i++;
			}
			write(1, "\n", 1);
		}
		len--;
	}
	return 0;
}