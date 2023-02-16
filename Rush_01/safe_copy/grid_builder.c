/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   grid_builder.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogpere <diogpere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 17:30:33 by diogpere          #+#    #+#             */
/*   Updated: 2023/02/05 19:08:46 by diogpere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char	*combinator(char *argv_index, char *forbidden,
			int *past_index, int collum);
void	printer(char **collums);

/* Puts the reequested numbers into a given column in the main
	4x4 grid. */
void	putter_collum(char **collumns, char *collumn, int index)
{
	int	i;

	i = 0;
	while (i < 4)
	{
		collumns[i][index] = collumn[i];
		i++;
	}
}

/* Finds any numbers that are duplicated in a row and returns the
   collum that the duplicated number was in. */
char	*duplicate_finder(char **collums, int *x_y, int *index1,
		int *index2)
{
	int		j;
	int		i;
	char	*collum;

	collum = (char *)malloc(4);
	j = 0;
	i = 0;
	while (j < x_y[0])
	{
		if (collums[x_y[1]][j] == collums[x_y[1]][x_y[0]])
		{
			*index1 = x_y[0];
			*index2 = x_y[1];
			while (i < 4)
			{
				collum[i] = collums[i][x_y[0]];
				i++;
			}
			collum[i] = '\0';
			return (collum);
		}
		j++;
	}
	return (0);
}

/* Fills up the grid (without checking for duplicates yet)
   with the first combination that is available from
   the COMBINATOR function in "combinator.c". */
void	first_fill(char **collums, char **words, char *test_collumn,
		int *past_index)
{
	int		index;
	int		argv_index;
	char	argv_i[2];

	index = 0;
	argv_index = 0;
	while ((argv_index + 4) < 8)
	{
		argv_i[0] = words[argv_index][0];
		argv_i[1] = words[argv_index + 4][0];
		test_collumn = combinator(argv_i, "\0", past_index, argv_index);
		putter_collum(collums, test_collumn, index);
		index++;
		argv_index++;
	}
}
