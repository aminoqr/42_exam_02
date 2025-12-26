#include <stdlib.h>
#include <stdio.h>

void	str_assign(char *str, int i, int nbr)
{
	if (nbr == 0)
		return;
	str_assign(str, i-1, nbr/10);
	str[i] = nbr % 10 + '0';
}

char	*ft_itoa(int nbr)
{
	int len = 0;
	int num = nbr;
	while(num >= 1)
	{
		num /= 10;
		len++;
	}
	char *str;
	str = malloc(sizeof(char) * (len + 1));
	if (!str)
		return 0;
	str_assign(str, len-1, nbr);
	return (str);
}
int main()
{
	printf("%s", ft_itoa(12345));
}