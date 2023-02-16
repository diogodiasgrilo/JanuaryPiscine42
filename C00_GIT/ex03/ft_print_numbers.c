/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogpere <diogpere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 08:11:55 by diogpere          #+#    #+#             */
/*   Updated: 2023/01/25 14:42:38 by diogpere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	int		first;
	char	c;

	first = 48;
	while (first != 58)
	{
		c = (char)first;
		write(1, &c, 1);
			first++;
	}
}

// int main() {
//     ft_print_numbers();
// }