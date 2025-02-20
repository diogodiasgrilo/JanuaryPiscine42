/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_clear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogpere <diogpere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 10:52:15 by diogpere          #+#    #+#             */
/*   Updated: 2023/02/15 16:34:17 by diogpere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_clear(t_list *begin_list, void (*free_fct)(void *))
{
	t_list	*tmp;
	t_list	*list;

	list = begin_list;
	while (list)
	{
		tmp = list->next;
		if (list->data)
			free_fct(list->data);
		free(list);
		list = tmp;
	}
	begin_list = ((void *)0);
}

//////////////////////////////////////////////

// t_list	*ft_create_elem(void *data)
// {
// 	t_list	*ret;

// 	ret = malloc(sizeof(t_list));
// 	if (ret != 0)
// 	{
// 		ret->data = data;
// 		ret->next = 0;
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
// 	printf("=> Freed:\n");
// 	ft_list_clear(list0, (void (*)(void *))puts);
// 	print_list(list0);

// 	printf("\nlist: ");
// 	print_list(list1);
// 	printf("=> freed:\n");
// 	ft_list_clear(list1, (void (*)(void *))puts);
// 	print_list(list1);
// }