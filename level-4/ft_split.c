#include <stdio.h>
#include <stdlib.h>

int word_counter(char *str)
{
	int i = 0;
	int count = 0;
	while(str[i])
	{
		while(str[i] && (str[i] == ' ' || str[i] == '\t'))
			i++;
		if (str[i])
		{
			count++;
			while(str[i] && str[i] != ' ' && str[i] != '\t')
				i++;
		}
	}
	return count;
}

int	ft_wordlen(char *str)
{
	int i = 0;
	while(str[i] && str[i] != ' ' && str[i] != '\t')
		i++;
	return (i);
}

void	splitter(char **split, char *str)
{
	int i = 0;
	int j = 0;
	int k = 0;

	while(str[i])
	{
		while (str[i] == ' ' || str[i] == '\t')
			i++;
		if (!str[i])
			break;
		split[j] = malloc(sizeof(char) * (ft_wordlen(&str[i]) + 1));
		if (!split[j])
			return;
		k = 0;
		while(str[i] && str[i] != ' ' && str[i] != '\t')
		{
			split[j][k] = str[i];
			k++;
			i++;
		}
		split[j][k] = '\0';
		j++;
	}
	split[j] = NULL;
}

char **ft_split(char *str)
{
	char **split;
	int word_num = word_counter(str);
	split = malloc(sizeof(char *) * (word_num + 1));
	if (!split)
		return 0;
	splitter(split, str);
	return split;
}