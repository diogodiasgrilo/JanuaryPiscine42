/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_level_count.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogpere <diogpere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 10:23:18 by diogpere          #+#    #+#             */
/*   Updated: 2023/02/16 09:51:09 by diogpere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

int	btree_level_count(t_btree *root)
{
	int		size_l;
	int		size_r;
	t_btree	*guide;

	size_l = 0;
	size_r = 0;
	guide = root;
	while (guide != 0)
	{
		size_l++;
		guide = guide->left;
	}
	guide = root;
	while (guide != 0)
	{
		size_r++;
		guide = guide->left;
	}
	if (size_l > size_r)
		return (size_l);
	else
		return (size_r);
}
