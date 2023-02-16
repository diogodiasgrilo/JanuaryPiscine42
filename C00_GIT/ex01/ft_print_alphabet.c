/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogpere <diogpere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 20:56:00 by diogpere          #+#    #+#             */
/*   Updated: 2023/01/25 14:40:08 by diogpere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)
{
	int		first;
	char	c;

	first = 97;
	while (first != 123)
	{
		c = (char)first;
		write(1, &c, 1);
			first++;
	}
}

// int main() {
//     ft_print_alphabet();
// }