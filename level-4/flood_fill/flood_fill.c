#include <stdlib.h>
#include <stdio.h>
#include "flood_fill.h"

void dfs_fill(char **tab, int i, int j, char old_char, t_point size)
{
	int n = size.y;
	int m = size.x;
	if (i < 0 || i >= n || j < 0 || j >= m || tab[i][j] != old_char)
		return;
	else
	{
		tab[i][j] = 'F';
		dfs_fill(tab, i+1, j, old_char, size);
		dfs_fill(tab, i-1, j, old_char, size);
		dfs_fill(tab, i, j+1, old_char, size);
		dfs_fill(tab, i, j-1, old_char, size);
	}
}

void flood_fill(char **tab, t_point size, t_point begin)
{
	int i = begin.y;
	int j = begin.x;
	
	char old_char = tab[i][j];
	if (old_char == 'F')
		return;
	dfs_fill(tab, i, j, old_char, size);
}

char** make_area(char** zone, t_point size)
{
	char** new;

	new = malloc(sizeof(char*) * size.y);
	for (int i = 0; i < size.y; ++i)
	{
		new[i] = malloc(size.x + 1);
		for (int j = 0; j < size.x; ++j)
			new[i][j] = zone[i][j];
		new[i][size.x] = '\0';
	}

	return new;
}

int main(void)
{
	t_point size = {8, 5};
	char *zone[] = {
		"11111111",
		"10001001",
		"10010001",
		"10110001",
		"11100001",
	};

	char**  area = make_area(zone, size);
	for (int i = 0; i < size.y; ++i)
		printf("%s\n", area[i]);
	printf("\n");

	t_point begin = {7, 4};
	flood_fill(area, size, begin);
	for (int i = 0; i < size.y; ++i)
		printf("%s\n", area[i]);
	return (0);
}