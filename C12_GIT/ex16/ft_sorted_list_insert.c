/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sorted_list_insert.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogpere <diogpere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 18:56:35 by diogpere          #+#    #+#             */
/*   Updated: 2023/02/15 12:01:34 by diogpere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_sorted_list_insert(t_list **begin_list, void *data, int (*cmp)())
{
	t_list	*guide;
	t_list	*guide2;
	t_list	*new;
	char	*swap;

	new = ft_create_elem(data);
	new->next = (*begin_list);
	*begin_list = new;
	guide = *begin_list;
	while (guide != NULL)
	{
		guide2 = guide->next;
		while (guide2 != NULL)
		{
			if ((*cmp)(guide->data, guide2->data) > 0)
			{
				swap = guide->data;
				guide->data = guide2->data;
				guide2->data = swap;
			}
			guide2 = guide2->next;
		}
		guide = guide->next;
	}
}

/////////////////////////////////////////////

// t_list	*ft_create_elem(void *data)
// {
// 	t_list	*ret;

// 	ret = malloc(sizeof(t_list));
// 	if (ret != NULL)
// 	{
// 		ret->data = data;
// 		ret->next = NULL;
// 	}
// 	return (ret);
// }

// void	ft_list_push_front(t_list **begin_list, void *data)
// {
// 	t_list	*temp;

// 	if (begin_list == 0)
// 		return ;
// 	temp = ft_create_elem(data);
// 	if (temp == 0)
// 		return ;
// 	temp->next = *begin_list;
// 	*begin_list = temp;
// }

// t_list	*ft_list_push_strs(int size, char **strs)
// {
// 	t_list	*ret;
// 	int		i;

// 	i = 0;
// 	ret = 0;
// 	while (i < size)
// 	{
// 		ft_list_push_front(&ret, strs[i]);
// 		++i;
// 	}
// 	return (ret);
// }

// void	print_list(t_list *list)
// {
// 	while (list != NULL)
// 	{
// 		printf("\"%s\" -> ", (char *)list->data);
// 		list = list->next;
// 	}
// 	printf("NULL\n");
// }

// int	main(void)
// {
// 	char *test0[] = {"oaba", "nas", "bfas", "arvore"};
// 	char *test1[] = {"kapa", "ialinha", "havalo", "corco", "avelha"};
// 	char *test2[] = {"vaca"};

// 	t_list *list0 = ft_list_push_strs(4, test0);
// 	t_list *list1 = ft_list_push_strs(5, test1);
// 	;
// 	t_list *list2 = ft_list_push_strs(1, test2);
// 	;

// 	printf("before: ");
// 	print_list(list0);
// 	ft_sorted_list_insert(&list0, "caaa", (int (*)())strcmp);
// 	printf("after:  ");
// 	print_list(list0);

// 	printf("\nbefore: ");
// 	print_list(list1);
// 	ft_sorted_list_insert(&list1, "bab", (int (*)())strcmp);
// 	printf("after:  ");
// 	print_list(list1);

// 	printf("\nbefore: ");
// 	print_list(list2);
// 	ft_sorted_list_insert(&list2, "x", (int (*)())strcmp);
// 	printf("after:  ");
// 	print_list(list2);
// }