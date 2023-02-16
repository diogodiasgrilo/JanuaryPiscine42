/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   helper.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogpere <diogpere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 18:36:19 by diogpere          #+#    #+#             */
/*   Updated: 2023/02/05 20:01:20 by diogpere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Moves the index past any spaces, tabs or new lines.
void	mover(char *str, int *j)
{
	if (str[*j] == 32 || str[*j] == 9 || str[*j] == 10)
	{
		while (str[*j] == 32 || str[*j] == 9 || str[*j] == 10)
			*j += 1;
	}
}

// Returns the length of the word that the index is currently on.
int	length(char *str, int j)
{
	int	length;

	length = 0;
	while (str[j] != 32 && str[j] != 9 && str[j] != 10 && str[j] != '\0')
	{
		j++;
		length++;
	}
	return (length);
}

char	**comb_final(char **value, char *forbidden)
{
	value[0] = forbidden;
	return (value);
}
