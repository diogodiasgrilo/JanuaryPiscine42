/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogpere <diogpere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 11:42:34 by diogpere          #+#    #+#             */
/*   Updated: 2023/01/29 12:50:24 by diogpere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 1;
	if (!str)
		return (str);
	if (str[0] <= 122 && str[0] >= 97)
		str[0] = str[0] - 32;
	while (str[i] != '\0')
	{
		if (str[i] >= 65 && str[i] <= 90)
		{
			str[i] = str[i] + 32;
		}
		if ((str[i - 1] < 48 || str[i - 1] > 57) && (str[i - 1] < 65 || str[i
					- 1] > 90) && (str[i - 1] < 97 || str[i - 1] > 122))
		{
			if (str[i] <= 122 && str[i] >= 97)
			{
				str[i] = str[i] - 32;
			}
		}
		i++;
	}
	return (str);
}

// int	main(void)
// {
// 	char str1[] = "alo maluco 42beleza!";
// 	char str2[] = "ALO MALUCO 42BELEZA!";
// 	char str3[] = "alo+ma|uco a2beleza!";
// 	char str4[] = "ALO+MALUCO*a2BELEZA!";
// 	char str5[] = "^uIv#= =9Hf~2y@F3A)FTzBgF";
// 	char str6[] = "tsR1|vn_WE}7X6{Vm2vQf(rG}qdnT`1,qH+n";

// 	printf("str1: %s\n", str1);
// 	ft_strcapitalize(str1);
// 	printf("str1_c: %s\n", str1);
// 	printf("str2: %s\n", str2);
// 	ft_strcapitalize(str2);
// 	printf("str2_c: %s\n", str2);
// 	printf("str3: %s\n", str3);
// 	ft_strcapitalize(str3);
// 	printf("str3_c: %s\n", str3);
// 	printf("str4: %s\n", str4);
// 	ft_strcapitalize(str4);
// 	printf("str4_c: %s\n", str4);
// 	printf("str5: %s\n", str5);
// 	ft_strcapitalize(str5);
// 	printf("str5_c: %s\n", str5);
// 	printf("str6: %s\n", str6);
// 	ft_strcapitalize(str6);
// 	printf("str6_c: %s\n", str6);
// 	return (0);
// }
