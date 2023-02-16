/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogpere <diogpere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 08:31:36 by diogpere          #+#    #+#             */
/*   Updated: 2023/01/29 10:19:38 by diogpere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

// int	main(void)
// {
// 	char *src;
// 	char *dest;
// 	char *ret;

// 	src = calloc(11, sizeof(char));
// 	src = "0123456789";
// 	dest = calloc(11, sizeof(char));
// 	ret = ft_strcpy(dest, src);
// 	printf("src: %s\n", src);
// 	printf("dest: %s\n", dest);
// 	printf("ret: %s\n", ret);
// 	return (0);
// }