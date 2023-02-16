/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_foreach.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogpere <diogpere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 11:11:41 by diogpere          #+#    #+#             */
/*   Updated: 2023/02/14 18:01:58 by diogpere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_foreach(t_list *begin_list, void (*f)(void *))
{
	t_list	*guide;

	guide = begin_list;
	while (guide)
	{
		(*f)(guide->data);
		guide = guide->next;
	}
}

///////////////////////////////////////////////////

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
// 	printf("=> foreach:\n");
// 	ft_list_foreach(list0, (void (*)(void *))puts);

// 	printf("\nlist: ");
// 	print_list(list1);
// 	printf("=> foreach:\n");
// 	ft_list_foreach(list1, (void (*)(void *))puts);
// }