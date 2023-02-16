/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogpere <diogpere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 11:08:49 by diogpere          #+#    #+#             */
/*   Updated: 2023/01/29 10:30:36 by diogpere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	if (!str)
		return (1);
	while (str[i] != '\0')
	{
		if (str[i] > 126 || str[i] < 32)
		{
			return (0);
		}
		i++;
	}
	return (1);
}

// int	main(void)
// {
// 	char *str1;
// 	char *str2;
// 	char *str3;
// 	char *str4;

// 	str1 = calloc(10, sizeof(char));
// 	str2 = calloc(10, sizeof(char));
// 	str3 = calloc(10, sizeof(char));
// 	str4 = calloc(10, sizeof(char));
// 	str1 = "ABCDEFGHI";
// 	str2 = "BCDEFGHI";
// 	str3 = "ABCDFGHI";
// 	str4 = "ABCDEFGH";
// 	printf("str1: %s, is_printable: %d\n", str1, ft_str_is_printable(str1));
// 	printf("str2: %s, is_printable: %d\n", str2, ft_str_is_printable(str2));
// 	printf("str3: %s, is_printable: %d\n", str3, ft_str_is_printable(str3));
// 	printf("str4: %s, is_printable: %d\n", str4, ft_str_is_printable(str4));
// 	return (0);
// }