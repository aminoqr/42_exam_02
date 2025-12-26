#include <stdlib.h>

int	*ft_range(int start, int end)
{
	int *arr_num;
	int dir = 1;
	if (start > end)
		dir *= -1;
	if (dir > 0)
		arr_num = malloc(sizeof(int) * (end - start + 1));
	else
		arr_num = malloc(sizeof(int) * (start - end + 1));
	if (!arr_num)
		return NULL;
	int i = 0;
	if (dir > 0)
	{
		while(start <= end)
		{
			arr_num[i] = start;
			i++;
			start++;
		}
	}
	else
	{
		while(start >= end)
		{
			arr_num[i] = start;
			i++;
			start--;
		}
	}
	return arr_num;
}