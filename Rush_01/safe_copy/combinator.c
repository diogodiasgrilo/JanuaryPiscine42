/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   combinator.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogpere <diogpere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 17:23:43 by diogpere          #+#    #+#             */
/*   Updated: 2023/02/05 20:42:35 by diogpere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char	**comb_final(char **value, char *forbidden);
int		ft_strcmp(char *one, char *two);
int		ft_strlen(char *str);

int	forbidden_checker(char bottomup, char *forbidden, char **value, int i)
{
	if (value[i + 1][1] == bottomup)
	{
		if (ft_strcmp(value[i], forbidden))
			return (0);
	}
	return (1);
}

void	resetter(int *past_index, int column, char **value)
{
	int	number_of;

	if (value[2][0] == '1')
		number_of = 12;
	if (value[2][0] == '2')
		number_of = 18;
	if (value[2][0] == '3')
		number_of = 10;
	if (value[2][0] == '4')
		number_of = 2;
	if (past_index[column] > number_of)
		past_index[column] = 1;
}

/* Seeks out a different combination with the same views
		for either a first fill of a 
		column or for a replacement for a column that had a 
	duplicated number in a row. */
char	*seeker(char bottomup, char **value,
		int *past_index, int column)
{
	int	i;

	resetter(past_index, column, value);
	i = past_index[column];
	while (value[i] != 0)
	{
		if (forbidden_checker(bottomup, value[0], value, i))
		{
			past_index[column] = i;
			return (value[i]);
		}
		i += 2;
	}
	return (0);
}

char	**combinations(char *forbidden, char number)
{
	char	**value1;
	char	**value2;
	char	**value3;
	char	**value4;
	
	value1 = (char *[]){"0000", "4123", "12", "4312", "13", "4132", \
		"13", "4213", "12", "4231", "13", "4321", "14"};
	value2 = (char *[]){"0000", "3412", "22", "1423", "22", "2431", \
		"22", "3142", "22", "2413", "22", "3421", "22", "3214", "21", \
		"1432", "23", "2143", "22"};
	value3 = (char *[]){"0000", "2341", "32", "2134", "31", "2314", "31", \
		"1324", "31", "1243", "32"};
	value4 = (char *[]){"0000", "1234", "41"};
	if (number == '1')
		return (comb_final(value1, forbidden));
	if (number == '2')
		return (comb_final(value2, forbidden));
	if (number == '3')
		return (comb_final(value3, forbidden));
	if (number == '4')
		return (comb_final(value4, forbidden));
	return (0);
}

/* Contains all the combinations possible for each valid view
		on a 4x4 grid,  this function also call the seeker function
		with the right paramenters given the view nunber requested. */
char	*combinator(char *argv_index, char *forbidden,
		int *past_index, int column)
{
	if (argv_index[0] == '1')
		return (seeker(argv_index[1], combinations(forbidden, '1'), \
		past_index, column));
	else if (argv_index[0] == '2')
		return (seeker(argv_index[1], combinations(forbidden, '2'), \
		past_index, column));
	else if (argv_index[0] == '3')
		return (seeker(argv_index[1], combinations(forbidden, '3'), \
		past_index, column));
	else if (argv_index[0] == '4')
		return (seeker(argv_index[1], combinations(forbidden, '4'), \
		past_index, column));
	return (0);
}
