#include <stdio.h>

int ft_power(int base, int pow)
{
	int i = 0;
	int res = 1;
	while (i < pow)
	{
		res *= base;
		i++;
	}
	return res;
}

int	ft_atoi_base(const char *str, int str_base)
{
		int len = 0;
		while(str[len])
			len++;
		len--;	
		int i = 0;
		int res = 0;
		int sign = 1;
		if (str[i] == '-')
		{
			sign *= -1;
			len--;
			i++;
		}
		int power = 0;
		while(len >= i)
		{
			if (str[len] >= 'a' && str[len] <= 'f') //87
			{
				res = res + (str[len] - 87) * ft_power(str_base, power);
				power++;
				len--;
			}
			else if (str[len] >= 'A' && str[len] <= 'F') //31
			{
				res = res + (str[len] - 31) * ft_power(str_base, power);
				power++;
				len--;
			}
			else if(str[len] >= '0' && str[len] <= '9')
			{
				res = res + (str[len] - '0') * ft_power(str_base, power);
				power++;
				len--;
			}
			else
				len--;
		}
		return sign * res;
}

int main()
{
	printf("%d", ft_atoi_base("ff", 16));
}