#include <unistd.h>

int ft_strchr(char *str, char c, int index)
{
	int i = -1;
	while (++i < index)
	{
		if (str[i] == c)
			return (1);
	}
	return 0;
}

int	main(int argc, char **argv)
{
	if (argc != 3)
	{
		write(1, "\n", 1);
		return (0);
	}
	int len = 0;
	while(argv[1][len])
		len++;
	int j = 0;
	while(argv[2][j])
	{
		argv[1][len] = argv[2][j];
		len++;
		j++;
	}
	int i = -1;
	while(++i < len)
	{
		if (!ft_strchr(argv[1], argv[1][i], i))
			write(1, &argv[1][i], 1);
	}
	write(1, "\n", 1);
}