/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_advanced_sort_string_tab.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogpere <diogpere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 10:45:43 by diogpere          #+#    #+#             */
/*   Updated: 2023/02/14 10:48:33 by diogpere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void	ft_swap(char **a, char **b)
{
	char	*tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

void	ft_advanced_sort_string_tab(char **tab, int (*cmp)(char *, char *))
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
			if (cmp(tab[j], tab[j + 1]) > 0)
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

// int	ft_strcmp(char *s1, char*s2)
// {
// 	return (strcmp(s1, s2));
// }

// int	rev_strcmp(char *s1, char*s2)
// {
// 	return (-1 * strcmp(s1, s2));
// }

// int	main(void)
// {
// 	char *tab0[] = {"blablabla", "array", "word", "00", "this is arr", NULL};
// 	printf("tab before:     ");
// 	print_tab_nl(tab0);

// 	ft_advanced_sort_string_tab(tab0, ft_strcmp);

// 	printf("tab strcmp:     ");
// 	print_tab_nl(tab0);

// 	ft_advanced_sort_string_tab(tab0, rev_strcmp);

// 	printf("tab rev_strcmp: ");
// 	print_tab_nl(tab0);
// }