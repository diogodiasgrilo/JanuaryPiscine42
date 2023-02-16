/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogpere <diogpere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 17:34:47 by diogpere          #+#    #+#             */
/*   Updated: 2023/02/05 20:57:41 by diogpere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int		immediate_error(char **words);
void	grid_caller(char **words);
char	**argv_getter(char *str);

/* Checks for errors in argv[1], allocates space for each
 of the 16 numbers of each view and created a magic 4x4
  grid that has every number in its right space as requested. */
int	main(int argc, char *argv[])
{
	char	**words;
	int		*numbers;

	words = argv_getter(argv[1]);
	if (!words)
	{
		write(1, "Error.\n", 8);
		return (1);
	}
	if (immediate_error(words) || argc != 2 || !argv[1])
	{
		write(1, "Error.\n", 8);
		return (1);
	}
	grid_caller(words);
	return (0);
}