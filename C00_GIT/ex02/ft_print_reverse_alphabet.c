/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogpere <diogpere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 08:06:29 by diogpere          #+#    #+#             */
/*   Updated: 2023/01/25 14:42:37 by diogpere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	int		first;
	char	c;

	first = 122;
	while (first != 96)
	{
		c = (char)first;
		write(1, &c, 1);
			first--;
	}
}

// int main() {
//     ft_print_reverse_alphabet();
// }