/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_search_item.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogpere <diogpere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 10:16:20 by diogpere          #+#    #+#             */
/*   Updated: 2023/02/16 09:51:19 by diogpere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

void	*btree_search_item(t_btree *root, void *data_ref, int (*cmpf)(void *,
			void *))
{
	void	*guide;

	guide = ((void *)0);
	if (root)
	{
		guide = btree_search_item(root->left, data_ref, cmpf);
		if (!guide && !((*cmpf)(root->item, data_ref)))
			guide = root->item;
		if (!guide)
			guide = btree_search_item(root->right, data_ref, cmpf);
	}
	return (guide);
}
