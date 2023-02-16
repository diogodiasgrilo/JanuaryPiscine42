/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogpere <diogpere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 12:46:13 by diogpere          #+#    #+#             */
/*   Updated: 2023/02/09 11:21:12 by diogpere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <unistd.h>
#include <stdlib.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	while (*str)
	{
		write(1, str, 1);
		str++;
	}
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		ft_putchar('-');
		ft_putchar('2');
		ft_putnbr(147483648);
	}
	else if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
		ft_putnbr(nb);
	}
	else if (nb > 9)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
		ft_putchar(nb + 48);
}

void	ft_show_tab(struct s_stock_str *par)
{
	int	size;

	while (par->str != 0)
	{
		ft_putstr(par->str);
		write(1, "\n", 1);
		size = par->size;
		ft_putnbr(size);
		write(1, "\n", 1);
		ft_putstr(par->copy);
		write(1, "\n", 1);
		par++;
	}
}

// char	*ft_strdup(char *src)
// {
// 	char			*dest;
// 	unsigned int	n;

// 	n = 0;
// 	while (src[n] != '\0')
// 		++n;
// 	dest = malloc(n + 1);
// 	if (dest != NULL)
// 	{
// 		dest[n] = '\0';
// 		while (n--)
// 			dest[n] = src[n];
// 	}
// 	return (dest);
// }

// unsigned int	ft_strlen(char *str)
// {
// 	unsigned int	n;

// 	n = 0;
// 	while (*str)
// 		++str && ++n;
// 	return (n);
// }

// void	init_stock_str(struct s_stock_str *s, char *str)
// {
// 	if (str == NULL)
// 	{
// 		s->size = 0;
// 		s->str = NULL;
// 		s->copy = NULL;
// 	}
// 	else
// 	{
// 		s->str = str;
// 		s->size = ft_strlen(str);
// 		s->copy = ft_strdup(str);
// 	}
// }

// struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
// {
// 	struct s_stock_str	*ret;

// 	ret = malloc((ac + 1) * sizeof(struct s_stock_str));
// 	if (ret == NULL)
// 		return (NULL);
// 	init_stock_str(&ret[ac], NULL);
// 	while (--ac >= 0)
// 		init_stock_str(&ret[ac], av[ac]);
// 	return (ret);
// }

// int	main(void)
// {
// 	char *strings[] = {"string1", "string2", "stringmuitomaior1", "fim", "",
// 		"loucura", "issae"};
// 	struct s_stock_str *tab = ft_strs_to_tab(7, strings);

// 	ft_show_tab(tab);
// }