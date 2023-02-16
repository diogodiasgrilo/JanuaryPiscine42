/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogpere <diogpere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 11:11:41 by diogpere          #+#    #+#             */
/*   Updated: 2023/02/08 12:21:27 by diogpere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	checkerror(char *str)
{
	int	i;
	int	j;

	i = 0;
	if (str[0] == '\0' || str[1] == '\0')
		return (0);
	while (str[i] != '\0')
	{
		if ((str[i] >= 9 && str[i] <= 13) || str[i] == 32
			|| str[i] == 43 || str[i] == 45)
			return (0);
		j = i + 1;
		while (str[j] != '\0')
		{
			if (str[i] == str[j])
				return (0);
			j++;
		}
		i++;
	}
	return (i);
}

int	nb_base(char str, char *base)
{
	int	nb;

	nb = 0;
	while (base[nb] != '\0')
	{
		if (str == base[nb])
			return (nb);
		nb++;
	}
	return (-1);
}

int	whitespaces(char *str, int *ptr_i)
{
	int	count;
	int	i;

	i = 0;
	count = 1;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	while ((str[i] != '\0') && (str[i] == 43 || str[i] == 45))
	{
		if (str[i] == 45)
			count *= -1;
		i++;
	}
	*ptr_i = i;
	return (count);
}

int	ft_atoi_base(char *str, char *base)
{
	int	i;
	int	count;
	int	nb;
	int	nb2;
	int	base_lenght;

	nb = 0;
	i = 0;
	base_lenght = checkerror(base);
	if (base_lenght >= 2)
	{
		count = whitespaces(str, &i);
		nb2 = nb_base(str[i], base);
		while (nb2 != -1)
		{
			nb = (nb * base_lenght) + nb2;
			i++;
			nb2 = nb_base(str[i], base);
		}
		return (nb *= count);
	}
	return (0);
}

// #include <stdio.h>

// void	ft_atoi_base_test(char *str, char *base, int expected_number)
// {
// 	int ft_buff;

// 	ft_buff = ft_atoi_base(str, base);
// 	if (ft_buff != expected_number)
// 		printf("> KO, expected: %d got: %d\n", expected_number, ft_buff);
// 	else
// 		printf("> OK, result: %d\n", ft_buff);
// }

// int	main(void)
// {
// 	// teste com bases binarias
// 	printf("Bases binarias:\n");
// 	ft_atoi_base_test("\n \t\r \v \f++++--1000,.fs", "01", 8);
// 	ft_atoi_base_test("\n \t\r \v \f++++--*/*/**,.fs", "/*", 43);
// 	// teste com bases octais
// 	printf("Bases octais:\n");
// 	ft_atoi_base_test("\n \t\r \v \f++-++--205,.fs", "01234567", -133);
// 	ft_atoi_base_test("\n \t\r \v \f+-+++--fdd,.fs", "abcdefgh", -347);
// 	// teste com bases decimais
// 	printf("Bases decimais:\n");
// 	ft_atoi_base_test("\n \t\r \v \f++-++--2147483648,
// .fs", "0123456789", -2147483648);
// 	ft_atoi_base_test("\n \t\r \v \f+-+++-+jjf,.fs", "abcdefghij", 995);
// 	// teste com bases hexadecimais
// 	printf("Bases hexadecimais:\n");
// 	ft_atoi_base_test("\n \t\r \v \f++-+-+-- 
// F0FA, .fs", "0123456789ABCDEF", 61690);
// 	ft_atoi_base_test("\n \t\r \v \f+-+++-+ninc,.fs", \
// "abcdefghijklmnop", 55506);
// 	// teste com bases invalidas
// 	printf("Bases invalidas:\n");
// 	ft_atoi_base_test("\n \t\r ++-++-123456,das", "", 0);
// 	ft_atoi_base_test("\n \t\r ++-++-123456,das", "0", 0);
// 	ft_atoi_base_test("\n \t\r ++-++-123456,das", "0123456678", 0);
// 	ft_atoi_base_test("\n \t\r ++-++-123456,das", "0123\n", 0);
// 	ft_atoi_base_test("\n \t\r ++-++-123456,das", "0123\v", 0);
// 	ft_atoi_base_test("\n \t\r ++-++-123456,das", "0123\t", 0);
// 	ft_atoi_base_test("\n \t\r ++-++-123456,das", "0123\f", 0);
// 	ft_atoi_base_test("\n \t\r ++-++-123456,das", "0123\r", 0);
// 	ft_atoi_base_test("\n \t\r ++-++-123456,das", "0123 ", 0);
// 	ft_atoi_base_test("\n \t\r ++-++-123456,das", "0123+", 0);
// 	ft_atoi_base_test("\n \t\r ++-++-123456,das", "0123-", 0);
// }
