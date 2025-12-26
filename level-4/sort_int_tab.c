#include <stdio.h>

void sort_int_tab(int *tab, unsigned int size)
{
	int i = 0;
	int j;
	int temp;
	while(i < size)
	{
		j = i + 1;
		while(j < size)
		{
			if (tab[i] > tab[j])
			{
				temp = tab[i];
				tab[i] = tab[j];
				tab[j] = temp;
			}
			j++;
		}
		i++;
	}
}

int main()
{
	int tab[5] = {2, 3, 1, 5, 4};
	sort_int_tab(tab, 5);
	int i = 0;
	while(i < 5)
	{
		printf("%d ", tab[i]);
		i++;
	}
}