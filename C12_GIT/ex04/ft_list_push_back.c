/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogpere <diogpere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 10:41:01 by diogpere          #+#    #+#             */
/*   Updated: 2023/02/15 11:34:17 by diogpere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_push_back(t_list **begin_list, void *data)
{
	t_list	*guide;
	t_list	*new;

	new = ft_create_elem(data);
	guide = *begin_list;
	if (!*begin_list)
		*begin_list = new;
	else
	{
		while (guide->next != 0)
			guide = guide->next;
		guide->next = new;
	}
}

////////////////////////////////////////////////////////////

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
// 	t_list *list0 = NULL;
// 	t_list *list1 = NULL;
// 	t_list *list2 = NULL;

// 	ft_list_push_back(&list0, "banana");
// 	ft_list_push_back(&list0, "maçã");
// 	ft_list_push_back(&list0, "abacaxi");
// 	printf("list: ");
// 	print_list(list0);
// 	ft_list_push_back(&list1, "brabo");
// 	printf("list: ");
// 	print_list(list1);
// 	ft_list_push_back(&list2, "brabo0");
// 	ft_list_push_back(&list2, "brabo1");
// 	printf("list: ");
// 	print_list(list2);
// }