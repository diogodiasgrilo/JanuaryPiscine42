/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sorted_list_merge.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogpere <diogpere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 15:29:20 by diogpere          #+#    #+#             */
/*   Updated: 2023/02/15 16:34:26 by diogpere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_insert(t_list **begin_list, int (*cmp)())
{
	void	*val;

	if (*begin_list || (*begin_list)->next)
	{
		if (cmp((*begin_list)->data, ((*begin_list)->next)->data) > 0)
		{
			val = (*begin_list)->data;
			(*begin_list)->data = ((*begin_list)->next)->data;
			((*begin_list)->next)->data = val;
			ft_insert(&((*begin_list)->next), cmp);
		}
	}
}

void	ft_sorted_list_merge(t_list **begin_list1, t_list *begin_list2,
		int (*cmp)())
{
	t_list	*liste;

	if (begin_list2)
	{
		liste = begin_list2->next;
		begin_list2->next = *begin_list1;
		*begin_list1 = begin_list2;
		begin_list2 = liste;
		ft_insert(begin_list1, cmp);
		ft_sorted_list_merge(begin_list1, begin_list2, cmp);
	}
}

///////////////////////////////////////////////

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
// 	char *test3[] = {"kapa", "ialinha", "havalo", "corco", "avelha"};

// 	t_list *list0 = ft_list_push_strs(4, test0);
// 	t_list *list1 = ft_list_push_strs(5, test1);
// 	t_list *list2 = ft_list_push_strs(1, test2);
// 	t_list *list3 = ft_list_push_strs(5, test3);

// 	printf("before: ");
// 	print_list(list0);
// 	ft_sorted_list_merge(&list0, list1, (int (*)())strcmp);
// 	printf("after:  ");
// 	print_list(list0);

// 	printf("before: ");
// 	print_list(list2);
// 	ft_sorted_list_merge(&list2, list3, (int (*)())strcmp);
// 	printf("after:  ");
// 	print_list(list3);
// }