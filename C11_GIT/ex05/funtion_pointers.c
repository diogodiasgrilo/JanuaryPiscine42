/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funtion_pointers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogpere <diogpere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 09:55:20 by diogpere          #+#    #+#             */
/*   Updated: 2023/02/14 15:09:52 by diogpere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int	function_holder(int index, int x, int y)
{
	int	(*f[5])(int x, int y);

	f[0] = add;
	f[1] = sub;
	f[2] = div;
	f[3] = mult;
	f[4] = mod;
	if (index == 0)
		return (f[0](x, y));
	else if (index == 1)
		return (f[1](x, y));
	else if (index == 2)
		return (f[2](x, y));
	else if (index == 3)
		return (f[3](x, y));
	else if (index == 4)
		return (f[4](x, y));
	return (0);
}
