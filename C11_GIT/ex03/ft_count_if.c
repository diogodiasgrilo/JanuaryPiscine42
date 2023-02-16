/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogpere <diogpere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 14:01:01 by diogpere          #+#    #+#             */
/*   Updated: 2023/02/14 09:53:01 by diogpere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_count_if(char **tab, int length, int (*f)(char *))
{
	int	count;
	int	i;

	count = 0;
	i = 0;
	while (i < length)
	{
		if (f(tab[i]) != 0)
			count++;
		i++;
	}
	return (count);
}

// #include <stdio.h>
// #include <string.h>

// int	is_empty(char *str)
// {
// 	return (*str == '\0');
// }

// int	main(void)
// {
// 	char *tab0[] = {"bla bla bla", "", "tatat", "777", "", "hahsdfas", "",
// 		"4123"};
// 	char *tab1[] = {"", "", "tatat", "777", "", "hahsdfas", "", "4123"};
// 	printf("expected: 3, got %i\n", ft_count_if(tab0, 8, is_empty));
// 	printf("expected: 4, got %i\n", ft_count_if(tab1, 8, is_empty));
// }