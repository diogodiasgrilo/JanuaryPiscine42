/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_reverse.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogpere <diogpere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 11:02:44 by diogpere          #+#    #+#             */
/*   Updated: 2023/02/14 18:01:37 by diogpere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "../ex07/ft_list.h"
#include "ft_list.h"
#include <stdio.h>
#include <stdlib.h>

void	ft_list_reverse(t_list **begin_list)
{
	t_list	*prev;
	t_list	*current;
	t_list	*next;

	current = (*begin_list);
	prev = 0;
	next = 0;
	while (current != 0)
	{
		next = current->next;
		current->next = prev;
		prev = current;
		current = next;
	}
	*begin_list = prev;
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
// 	char *test0[] = {"blablabla", "abacaxi", "banana", "árvore"};
// 	char *test1[] = {"vaca", "galinha", "cavalo", "porco", "ovelha"};

// 	t_list *list0 = ft_list_push_strs(4, test0);
// 	t_list *list1 = ft_list_push_strs(5, test1);
// 	;

// 	printf("before: ");
// 	print_list(list0);
// 	ft_list_reverse(&list0);
// 	printf("after:  ");
// 	print_list(list0);

// 	printf("\nbefore: ");
// 	print_list(list1);
// 	ft_list_reverse(&list1);
// 	printf("after:  ");
// 	print_list(list1);
// }