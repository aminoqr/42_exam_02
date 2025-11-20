#include <unistd.h>
#include <stdio.h>

size_t ft_strspn(const char *s, const char *accept)
{
	int i = 0;
	int j;
	int count = 0;
	while(s[i])
	{
		j = 0;
		while(accept[j])
		{
			if (s[i] == accept[j])
				count++;
			j++;
		}
		i++;
	}
	return count;
}

int main()
{
	printf("%ld", ft_strspn("hello", "elh"));
}