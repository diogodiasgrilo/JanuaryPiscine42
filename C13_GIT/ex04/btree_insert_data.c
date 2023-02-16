/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_insert_data.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogpere <diogpere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 10:07:58 by diogpere          #+#    #+#             */
/*   Updated: 2023/02/16 10:02:06 by diogpere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

void	helper_insert(t_btree **guide, t_btree *new, int (*cmpf)(void *,
			void *))
{
	while (*guide != 0)
	{
		if (cmpf((*guide)->item, new->item) > 0)
		{
			if ((*guide)->left == 0)
			{
				(*guide)->left = new;
				return ;
			}
			else
				(*guide) = (*guide)->left;
		}
		else if (cmpf((*guide)->item, new->item) <= 0)
		{
			if ((*guide)->right == 0)
			{
				(*guide)->right = new;
				return ;
			}
			else
				(*guide) = (*guide)->right;
		}
	}
}

void	btree_insert_data(t_btree **root, void *item, int (*cmpf)(void *,
			void *))
{
	t_btree	*guide;
	t_btree	*new;

	new = btree_create_node(item);
	if (!new)
		return ;
	guide = *root;
	if (!guide)
		*root = new;
	helper_insert(&guide, new, cmpf);
}
