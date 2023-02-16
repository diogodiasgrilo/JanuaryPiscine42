/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogpere <diogpere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 12:40:15 by diogpere          #+#    #+#             */
/*   Updated: 2023/02/14 10:51:26 by diogpere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_foreach(int *tab, int length, void (*f)(int))
{
	int	i;

	i = 0;
	while (i < length)
	{
		f(tab[i]);
		i++;
	}
}

// #include <unistd.h>

// void	ft_putnbr_nl(int nb)
// {
// 	char	c;
// 	int		number_started;
// 	int		div;

// 	c = '-';
// 	if (nb < 0)
// 	{
// 		write(1, &c, 1);
// 	}
// 	div = -1000000000;
// 	number_started = 0;
// 	nb = nb > 0 ? -nb : nb;
// 	while (div)
// 	{
// 		c = '0' + nb / div;
// 		nb = nb % div;
// 		if (number_started || c != '0' || div == -1)
// 		{
// 			write(1, &c, 1);
// 			number_started = 1;
// 		}
// 		div = div / 10;
// 	}
// 	write(1, "\n", 1);
// }

// int		main()
// {
// 	int tab[] = {10, 54, 234, 12, 8, 7};
// 	ft_foreach(tab, 6, ft_putnbr_nl);
// }