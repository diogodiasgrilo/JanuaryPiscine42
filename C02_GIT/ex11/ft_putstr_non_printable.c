/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogpere <diogpere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/28 10:51:17 by diogpere          #+#    #+#             */
/*   Updated: 2023/01/29 13:00:15 by diogpere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

#define HEX "0123456789abcdef"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_write_hex(unsigned char c)
{
	ft_putchar('\\');
	ft_putchar(HEX[c / 16]);
	ft_putchar(HEX[c % 16]);
}

void	ft_putstr_non_printable(char *str)
{
	if (!*str)
		return ;
	if ((unsigned char) *str < 32 || (unsigned char) *str >= 127)
		ft_write_hex((unsigned char) *str);
	else
		ft_putchar(*str);
	ft_putstr_non_printable(str + 1);
}

// int	main(void)
// {
// 	char str[] = {'0', '1', 2, 30, 16, '4', 'a', 19, 'C'};

// 	ft_putstr_non_printable(str);
// 	write(1, "\n", 1);
// 	return (0);
// }