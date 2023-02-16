/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogpere <diogpere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 14:46:52 by diogpere          #+#    #+#             */
/*   Updated: 2023/02/01 12:52:02 by diogpere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <limits.h>
#include <stdio.h>
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	checkerror(char *str)
{
	int	i;
	int	j;
	int	x;

	x = ft_strlen(str);
	i = 0;
	if (str[0] == '\0' || x == 1)
		return (0);
	while (str[i] != '\0')
	{
		if (str[i] <= 32 || str[i] == 127 || str[i] == 43 || str[i] == 45)
			return (0);
		j = i + 1;
		while (j < ft_strlen(str))
		{
			if (str[i] == str[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int		len;
	int		error;
	long	nb;

	error = checkerror(base);
	len = ft_strlen(base);
	nb = nbr;
	if (error == 1)
	{
		if (nb < 0)
		{
			ft_putchar('-');
			nb *= -1;
		}
		if (nb < len)
			ft_putchar(base[nb]);
		if (nb >= len)
		{
			ft_putnbr_base(nb / len, base);
			ft_putnbr_base(nb % len, base);
		}
	}
}

// int		main(void)
// {
// 	// base binaria
// 	printf("Bases binarias, n = 47. \"01\" e \"\\/\"\n");
// 	ft_putnbr_base(47, "01");
// 	ft_putchar('\n');
// 	printf("Esperado: 101111\n");
// 	ft_putnbr_base(47, "\\/");
// 	ft_putchar('\n');
// 	printf("Esperado: /\\////\n");
// 	// base 5
// 	printf("Bases 5, n = 36. \"01345\" e \"sd2ek\"\n");
// 	ft_putnbr_base(36, "01345");
// 	ft_putchar('\n');
// 	printf("Esperado: 131\n");
// 	ft_putnbr_base(36, "sd2ek");
// 	ft_putchar('\n');
// 	printf("Esperado: d2d\n");
// 	// base 10
// 	printf("Bases 10, n = %d. \"0123456789\" e \",.;\\][{}@#\"\n", INT_MIN);
// 	ft_putnbr_base(INT_MIN, "0123456789");
// 	ft_putchar('\n');
// 	printf("Esperado: -2147483648\n");
// 	ft_putnbr_base(INT_MIN, ",.;\\][{}@#");
// 	ft_putchar('\n');
// 	printf("Esperado: -;.]}]@\\{]@\n");
// 	// base 16
// 	printf("Bases 16, n =
//			-65040. \"0123456789ABCDEF\" e \"jdlskmnMKZxVuzfa\"\n");
// 	ft_putnbr_base(-65040, "0123456789ABCDEF");
// 	ft_putchar('\n');
// 	printf("Esperado: -FE10\n");
// 	ft_putnbr_base(-65040, "jdlskmnMKZxVuzfa");
// 	ft_putchar('\n');
// 	printf("Esperado: -afdj\n");
// 	// base 0 e base 1, nao pode aparecer nada
// 	printf("Bases 0 e 1, nao deve aparecer nada, n = 256.\n");
// 	ft_putnbr_base(-29092, "0");
// 	ft_putnbr_base(-29092, "");
// 	return (0);
// }