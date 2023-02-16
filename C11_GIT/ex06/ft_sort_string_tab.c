/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_string_tab.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogpere <diogpere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 09:56:49 by diogpere          #+#    #+#             */
/*   Updated: 2023/02/14 10:48:31 by diogpere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(char **a, char **b)
{
	char	*tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

int	ft_strcmp(char *s1, char *s2)
{
	unsigned int	i;

	i = 0;
	while (s1[i] == s2[i] && (s1[i] != '\0') && (s2[i] != '\0'))
		i++;
	return (s1[i] - s2[i]);
}

void	ft_sort_string_tab(char **tab)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (tab[i] != 0)
	{
		j = 0;
		while (tab[j + 1] != 0)
		{
			if (ft_strcmp(tab[j], tab[j + 1]) > 0)
				ft_swap(&tab[j], &tab[j + 1]);
			j++;
		}
		i++;
	}
}

// void	print_tab_nl(char **tab)
// {
// 	int i;
// 	i = 0;
// 	printf("{");
// 	while (tab[i] != NULL)
// 		printf("\"%s\", ", tab[i++]);
// 	printf("NULL} \n");

// }

// int	main(void)
// {
// 	char *tab0[] = {"blablabla", "array", "word", "00", "this is arr", NULL};
// 	printf("tab before: ");
// 	print_tab_nl(tab0);

// 	ft_sort_string_tab(tab0);

// 	printf("tab after:  ");
// 	print_tab_nl(tab0);
// }