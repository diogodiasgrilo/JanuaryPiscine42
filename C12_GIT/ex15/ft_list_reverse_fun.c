/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_reverse_fun.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogpere <diogpere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 12:02:38 by diogpere          #+#    #+#             */
/*   Updated: 2023/02/15 12:02:01 by diogpere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_reverse_fun(t_list *begin_list)
{
	t_list	*guide;
	t_list	*guide2;
	void	*swap;

	guide = begin_list;
	while (guide != NULL)
	{
		guide2 = guide->next;
		while (guide2 != NULL)
		{
			swap = guide->data;
			guide->data = guide2->data;
			guide2->data = swap;
			guide2 = guide2->next;
		}
		guide = guide->next;
	}
}

//////////////////////////////////////////

// t_list *ft_create_elem(void *data)
// {
//     t_list* new_node;

//     new_node = (t_list*)malloc(sizeof(t_list));
//     if(new_node)
//     {
//         new_node->data = data;
//         new_node->next = NULL;
//     }
//     return (new_node);
// }
// void display(t_list *head)
// {
//     while(head != NULL)
//     {
//         printf("%d ",*(int *)head->data);
//         head = head->next;
//     }
// }
// int main()
// {
//     int a = 40, b = 30, x= 20, o = 0;
//     void*    d =&a;
//     void*    e =&b;
//     void*    i = &x;
//     void*    q = &o;
//     t_list* head=(t_list*)malloc(sizeof(t_list));
//     head = ft_create_elem(d);
//     head->next = ft_create_elem(e);
//     head->next->next = ft_create_elem(i);
//     head->next->next->next = ft_create_elem(q);
//     display(head);
//     printf("\n");
//     ft_list_reverse_fun(head);
//     display(head);
//     return (0);
// }