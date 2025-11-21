#include <unistd.h>
#include <stdio.h>

int	is_prime(int num)
{
	int i = 2;
	while (i * i <= num)
	{
		if (num % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int	ft_atoi(char *str)
{
	int i = 0;
	int sign = 1;
	int sum = 0;
	if (str[i] == '-')
	{
		sign *= -1;
		i++;
	}
	while(str[i])
	{
		sum = sum * 10 + (str[i] - '0');
		i++;
	}
	return (sum);
}

void ft_putnbr(int num)
{
	if (num == 0)
		return;
	ft_putnbr(num / 10);
	char c = num % 10 + '0';
	write(1, &c, 1);
}

int main(int argc, char **argv)
{
	if (argc != 2)
	{
		write(1, "0\n", 2);
		return (0);
	}

	int num = ft_atoi(argv[1]);
	if (num <= 1)
	{
		write(1, "0\n", 2);
		return (0);
	}
	int n = 2;
	int sum = 0;
	while(n <= num)
	{
		if(is_prime(n))
			sum += n;
		n++;
	}
	ft_putnbr(sum);
	write(1, "\n", 1);
}