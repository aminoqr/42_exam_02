#include "ft_list.h"

t_list  *sort_list(t_list *lst, int (*cmp)(int, int))
{
	t_list *cur;
	int		tmp;
	int		sorted;

	if (!lst)
		return 0;
	
	sorted = 0;
	while(!sorted)
	{
		sorted = 1;
		cur = lst;
		while(cur ->next)
		{
			if(cmp(cur->data, cur->next->data) == 0)
			{
				tmp = cur->data;
				cur->data = cur->next->data;
				cur->next->data = tmp;
				sorted = 0;
			}
			cur = cur->next;
		}
	}
	return lst;
}

t_list *create_node(int num)
{
	t_list *node = malloc(sizeof(t_list));
	node ->data = num;
	node ->next = 0;
	return node;
}

void	push_front(t_list **lst, int data)
{
	t_list *node = create_node(data);
	node->next=*lst;
	*lst = node;
}
void print_list(t_list *lst)
{
    while (lst)
    {
        printf("%d ", lst->data);
        lst = lst->next;
    }
    printf("\n");
}

int main()
{
	t_list *node = 0;
	push_front(&node, 5);
	push_front(&node, 10);
	push_front(&node, 1);
	print_list(node);
	printf("%d", node->data);
}
