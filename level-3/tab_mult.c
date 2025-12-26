#include <unistd.h>

void ft_putnbr(int nb)
{
	if (nb == 0)
		return;
	ft_putnbr(nb/10);
	char c = nb % 10 + '0';
	write(1, &c, 1);
}

int ft_atoi(char *str)
{
	int i = 0;
	int res = 0;
	while(str[i])
	{
		res = res * 10 + (str[i] - '0');
		i++;
	}
	return (res);
}

int main(int argc, char **argv)
{
	if (argc != 2)
	{
		write(1, "\n", 1);
		return (0);
	}
	int num = ft_atoi(argv[1]);
	int len = 0;
	while(argv[1][len])
		len++;
	int i = 1;
	while(i < 10)
	{
		char ic = i + '0';
		write(1, &ic, 1);
		write(1, " x ", 3);
		write(1, &argv[1][0], len);
		write(1, " = ", 3);
		ft_putnbr(num * i);
		write(1, "\n", 1);
		i++;
	}
	return (0);
}