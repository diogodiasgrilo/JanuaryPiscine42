/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogpere <diogpere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 10:33:25 by diogpere          #+#    #+#             */
/*   Updated: 2023/02/14 17:58:20 by diogpere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int	ft_list_size(t_list *begin_list)
{
	t_list	*guide;
	int		count;

	guide = begin_list;
	count = 0;
	while (guide)
	{
		count++;
		guide = guide->next;
	}
	return (count);
}

//////////////////////////////////////////////////////////

// t_list		*ft_create_elem(void *data)
// {
// 	t_list *ret;

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
// 	t_list *temp;

// 	if (begin_list == 0)
// 		return ;
// 	temp = ft_create_elem(data);
// 	if (temp == 0)
// 		return ;
// 	temp->next = *begin_list;
// 	*begin_list = temp;
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

// int		main(void)
// {
// 	t_list *list;

// 	ft_list_push_front(&list, "banana");
// 	ft_list_push_front(&list, "maçã");
// 	ft_list_push_front(&list, "abacaxi");
// 	printf("size %i, list: ", ft_list_size(list));
// 	print_list(list);
// }