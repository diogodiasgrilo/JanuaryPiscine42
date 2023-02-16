/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogpere <diogpere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 08:25:48 by diogpere          #+#    #+#             */
/*   Updated: 2023/01/30 09:00:46 by diogpere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (to_find[j] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		while (str[i + j] == to_find[j] && str[i + j] != '\0')
			j++;
		if (to_find[j] == '\0')
			return (str + i);
		i++;
		j = 0;
	}
	return (0);
}

// int	main(void)
// {
// 	char *str;
// 	char *to_find;
// 	char *buff;
// 	char *ft_buff;

// 	str = strcpy(calloc(11, sizeof(char)), "alo galera");
// 	to_find = strcpy(calloc(7, sizeof(char)), "galera");
// 	buff = strstr(str, to_find);
// 	ft_buff = ft_strstr(str, to_find);
// 	if (buff != ft_buff)
// 		printf("[1] KO, substrings don't match(expected:%s, got:%s)\n", buff,
//				ft_buff);
// 	else
// 		printf("[1] OK. expected: %s result: %s\n", buff, ft_buff);
// 	str = strcpy(calloc(11, sizeof(char)), "alo galera");
// 	to_find = strcpy(calloc(7, sizeof(char)), "galerA");
// 	buff = strstr(str, to_find);
// 	ft_buff = ft_strstr(str, to_find);
// 	if (buff != ft_buff)
// 		printf("[2] KO, substrings don't match(expected:%s, got:%s)\n", buff,
//				ft_buff);
// 	else
// 		printf("[2] OK. expected: %s result: %s\n", buff, ft_buff);
// 	str = strcpy(calloc(11, sizeof(char)), "alo galera");
// 	to_find = strcpy(calloc(1, sizeof(char)), "");
// 	buff = strstr(str, to_find);
// 	ft_buff = ft_strstr(str, to_find);
// 	if (buff != ft_buff)
// 		printf("[2] KO, substrings don't match(expected:%s, got:%s)\n", buff,
// 		ft_buff);
// 	else
// 		printf("[2] OK. expected: %s result: %s\n", buff,
// 			ft_buff);
//	return (0);
// }