/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fixers.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogpere <diogpere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 17:45:59 by diogpere          #+#    #+#             */
/*   Updated: 2023/02/05 20:43:58 by diogpere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	putter_collum(char **collumns, char *collumn, int index);
char	*duplicate_finder(char **collums, int*x_y, int *index1,
			int *index2);
char	*combinator(char *argv_index, char *forbidden, \
					int *past_index, int collum);

#include <stdio.h>

// Returns the length of a string.
int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

// Compares two strings to see if all their characters are identical.
int	ft_strcmp(char *one, char *two)
{
	int	i;
	int	count;

	count = 0;
	i = 0;
	while (one[i] != '\0')
	{
		if (one[i] == two[i])
			count++;
		i++;
	}
	if (count == ft_strlen(one))
		return (1);
	return (0);
}

// Checks if there are still duplicated numbers in the grid.
int	final_whisper(char **collums)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	while (i < 4)
	{
		j = 1;
		while (j < 4)
		{
			k = 0;
			while (k < j)
			{
				if (collums[i][k] == collums[i][j])
					return (1);
				k++;
			}
			j++;
		}
		i++;
	}
	return (0);
}

/* Searches for duplicates in the grid and calls the COMBINATOR function
   for another combination different than any that the program has already
   tried for the column. */
void	fixer(char **collums, char **words, char *test_collumn, int *past_index)
{
	int		x_y[2];
	int		index1;
	int		index2;
	char	*forbidden;
	char	argv_index[2];

	x_y[1] = -1;
	while (++x_y[1] < 4)
	{
		x_y[0] = -1;
		while (++x_y[0] < 4)
		{
			forbidden = duplicate_finder(collums, x_y, &index1, &index2);
			if (forbidden)
			{
				argv_index[0] = words[index1][0];
				argv_index[1] = words[index1 + 4][0];
				test_collumn = combinator(argv_index, forbidden, past_index, \
							x_y[0]);
				if (test_collumn)
					putter_collum(collums, test_collumn, index1);
				break ;
			}
		}
	}
}

/* Is the main function that controls all the other functions
 that help with finding duplicates and switching their collumn
  out for a different combination.  */
void	final_fix(char **collums, char **words, char *test_collumn,
		int *past_index)
{
	int		y;
	int		x;

	y = 0;
	x = 0;
	fixer(collums, words, test_collumn, past_index);
	while (x < 8)
	{
		
		past_index[y] = past_index[y] + 2;
		y++;

		printf("HERE: %d\n", x);
		
		fixer(collums, words, test_collumn, past_index);
		x++;
	}
}
