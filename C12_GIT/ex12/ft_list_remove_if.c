/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_remove_if.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogpere <diogpere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 11:26:20 by diogpere          #+#    #+#             */
/*   Updated: 2023/02/14 18:02:52 by diogpere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)(),
		void (*free_fct)(void *))
{
	t_list	*guide;
	t_list	*prev;

	guide = (*begin_list);
	if (guide != NULL && (*cmp)(guide->data, data_ref) == 0)
	{
		(*begin_list) = guide->next;
		(*free_fct)(guide->data);
		free(guide);
		guide = (*begin_list);
		prev = (*begin_list);
	}
	while (guide != 0)
	{
		if ((*cmp)(guide->data, data_ref) == 0)
		{
			prev->next = guide->next;
			(*free_fct)(guide->data);
			free(guide);
			guide = prev;
		}
		prev = guide;
		guide = guide->next;
	}
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
// 	char *test0[] = {"blablabla", "abacaxi", "banana", "árvore", "abacaxi"};
// 	char *test1[] = {"vaca", "cavalo", "galinha", "cavalo", "porco", "ovelha"};

// 	t_list *list0 = ft_list_push_strs(5, test0);
// 	t_list *list1 = ft_list_push_strs(6, test1);
// 	;

// 	printf("before: ");
// 	print_list(list0);
// 	printf("=> freeing \"abacaxi\":\n");
// 	ft_list_remove_if(&list0, "abacaxi", (int (*)())strcmp,
// 			(void (*)(void *))puts);
// 	printf("after:  ");
// 	print_list(list0);

// 	printf("\nbefore: ");
// 	print_list(list1);
// 	printf("=> freeing \"cavalo\":\n");
// 	ft_list_remove_if(&list1, "cavalo", (int (*)())strcmp,
// 			(void (*)(void *))puts);
// 	printf("after:  ");
// 	print_list(list1);
// }