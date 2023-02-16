/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogpere <diogpere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 17:34:47 by diogpere          #+#    #+#             */
/*   Updated: 2023/01/27 08:16:56 by diogpere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strlen(char *str)
{
	int	size;

	size = 0;
	while (*(str + size) != '\0')
	{
		size++;
	}
	return (size);
}

// int	main(void)
// {
// 	char 	*str = "42 is amazing bro";
// 	int		size;

// 	size = ft_strlen(str);
// 	printf("str=\"%s\"\nstrlen=%d\n", str, size);
// 	return (0);
// }