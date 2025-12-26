#include <unistd.h>
#include <stdlib.h>

int	main(int argc, char **argv)
{
	if (argc == 1)
	{
		write(1, "\n", 1);
		return (0);
	}
	int i = 0;

	while(argv[1][i] && (argv[1][i] == ' ' || argv[1][i] == '\t'))
		i++;
	if (!argv[1][i])
	{
		write(1, "\n", 1);
		return (0);		
	}
	int first_word = 0;
	if (argv[1][i] && argv[1][i] != ' ' && argv[1][i] != '\t')
	{
		first_word = i;
		while(argv[1][i] && argv[1][i] != ' ' && argv[1][i] != '\t')
			i++;
	}
	
	while(argv[1][i])
	{
		while(argv[1][i] && (argv[1][i] == ' ' || argv[1][i] == '\t'))
			i++;
		if (argv[1][i] && argv[1][i] != ' ' && argv[1][i] != '\t')
		{
			while(argv[1][i] && argv[1][i] != ' ' && argv[1][i] != '\t')
			{
				write(1, &argv[1][i], 1);
				i++;
			}
		}
		if (i != first_word)
			write(1, " ", 1);
	}
	while(argv[1][first_word] && argv[1][first_word] != ' ' && argv[1][first_word] != '\t')
	{
		write(1, &argv[1][first_word], 1);
			first_word++;
	}
	write(1, "\n", 1);
	return (0);
}