/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_front.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogpere <diogpere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 10:24:15 by diogpere          #+#    #+#             */
/*   Updated: 2023/02/15 11:33:33 by diogpere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_push_front(t_list **begin_list, void *data)
{
	t_list	*front;

	front = ft_create_elem(data);
	if (!*begin_list)
		*begin_list = front;
	else
	{
		front->next = *begin_list;
		*begin_list = front;
	}
}

////////////////////////////////////////////

/*
void display(t_list *begin_list)
{
  while(begin_list != NULL)
  {
    printf("%d", *(int *)begin_list->data);
    begin_list = begin_list->next;
  }
}
t_list *ft_create_elem(void *data)
{
	t_list* new_node;
	
	new_node = (t_list*)malloc(sizeof(t_list));
	if(new_node)
	{
		new_node->data = data;
		new_node->next = NULL;
	}
	return (new_node);
}
int main() 
{
  t_list *head = NULL;
  int a = 13;
  int b = 3;
  int c = 7;
  void *d = &a;
  void *e = &b;
  void *f = &c;
  head = (t_list *)malloc(sizeof(t_list));
  head = ft_create_elem(d);
  head->next = ft_create_elem(e);
  head->next->next =ft_create_elem(f);
  display(head);
  printf("\t%d\t", ft_list_size(head));
  return 0;
} */ 