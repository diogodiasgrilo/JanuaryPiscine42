/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_at.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogpere <diogpere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 10:59:37 by diogpere          #+#    #+#             */
/*   Updated: 2023/02/14 18:00:42 by diogpere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_at(t_list *begin_list, unsigned int nbr)
{
	t_list			*guide;
	unsigned int	i;

	i = 0;
	guide = begin_list;
	while (i < nbr)
	{
		if (guide == 0)
			return (0);
		guide = guide->next;
		i++;
	}
	return (guide);
}

////////////////////////////////////////////////////

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

// 	printf("list: ");
// 	print_list(list0);
// 	printf("=> Item 0: \"%s\"\n", (char *)ft_list_at(list0, 0)->data);
// 	printf("=> Item 2: \"%s\"\n", (char *)ft_list_at(list0, 2)->data);
// 	printf("=> Item 3: \"%s\"\n", (char *)ft_list_at(list0, 3)->data);
// 	printf("=> Item 10: %p\n", (char *)ft_list_at(list0, 10));

// 	printf("\nlist: ");
// 	print_list(list1);
// 	printf("=> Item 0: \"%s\"\n", (char *)ft_list_at(list1, 0)->data);
// 	printf("=> Item 1: \"%s\"\n", (char *)ft_list_at(list1, 1)->data);
// 	printf("=> Item 4: \"%s\"\n", (char *)ft_list_at(list1, 4)->data);
// 	printf("=> Item 7: %p\n", (char *)ft_list_at(list1, 7));
// }