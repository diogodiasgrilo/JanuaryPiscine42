/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_sort.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogpere <diogpere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 11:57:52 by diogpere          #+#    #+#             */
/*   Updated: 2023/02/14 17:49:57 by diogpere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_sort(t_list **begin_list, int (*cmp)())
{
	char	*tmp;
	t_list	*guide;
	t_list	*guide2;

	if (*begin_list)
	{
		guide = *begin_list;
		while (guide != 0)
		{
			guide2 = guide->next;
			while (guide2 != 0)
			{
				if ((*cmp)(guide->data, guide2->data) > 0)
				{
					tmp = guide->data;
					guide->data = guide2->data;
					guide2->data = tmp;
				}
				guide2 = guide2->next;
			}
			guide = guide->next;
		}
	}
}

//////////////////////////////////////////

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
// 	char *test0[] = {"blablabla", "aaarbore", "banana", "aarvore", "abacaxi"};
// 	char *test2[] = {"camila", "mauricio", "eduardo", "wagnera", "lari",
// 		"gade-lim"};

// 	t_list *list0 = ft_list_push_strs(5, test0);
// 	t_list *list2 = ft_list_push_strs(6, test2);

// 	printf("before: ");
// 	print_list(list0);
// 	ft_list_sort(&list0, (int (*)())strcmp);
// 	printf("after:  ");
// 	print_list(list0);

// 	printf("\nbefore: ");
// 	print_list(list2);
// 	ft_list_sort(&list2, (int (*)())strcmp);
// 	printf("after:  ");
// 	print_list(list2);
// }