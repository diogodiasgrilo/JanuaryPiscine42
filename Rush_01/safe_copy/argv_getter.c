/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   argv_getter.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogpere <diogpere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 16:51:12 by diogpere          #+#    #+#             */
/*   Updated: 2023/02/05 18:37:35 by diogpere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

void	mover(char *str, int *j);
int		length(char *str, int j);

// Returns an error if the sum of any of the top-bottom and left-right 
// views is less than 3 or greater than 5.
int	immediate_error(char **words)
{
	int	i;

	i = 0;
	while (i + 4 < 16)
	{
		if ((words[i][0] - 48) + (words[i + 4][0] - 48) < 3 || (words[i][0] \
				- 48) + (words[i + 4][0] - 48) > 5)
			return (1);
		i++;
		if (i == 4)
			i = 8;
	}
	return (0);
}

// Inserts the word characters into pre-allocated space for the word.
int	insert(char *str, char *word, int *j, int length)
{
	int	i;
	int	now;

	i = 0;
	while (i != length)
	{
		now = *j;
		if (str[now] < '1' || str[now] > '4')
			return (1);
		word[i] = str[now];
		i++;
		*j += 1;
	}
	*j += 1;
	return (0);
}

/*  Controls the getting of a word,
	allocating of space for it and insert it's characters from the original 
	sentence to the new allocated space. */
char	*wordfind(char *str, int *j)
{
	char	*word;
	int		word_length;

	mover(str, j);
	word_length = length(str, *j);
	word = (char *)malloc(1 * word_length);
	if (insert(str, word, j, word_length))
		return (0);
	return (word);
}

char	**word_putter(int count, char *str)
{
	int		i;
	int		j;
	char	*word;
	char	**words;

	words = (char **)malloc(sizeof(char *) * count);
	i = 0;
	j = -1;
	while (++j < count)
	{
		word = wordfind(str, &i);
		if (!word)
			return (0);
		words[j] = word;
	}
	return (words);
}

/*  Controls the finding,
	allocating and returning of an array of strings which are 
  	the words delimited by spaces,tabs or newlines in the original 
 	string argv[1] */
char	**argv_getter(char *str)
{
	int		i;
	int		j;
	int		count;

	i = 0;
	count = 0;
	while (str[i])
	{
		mover(str, &i);
		if (length(str, i) > 0)
			count++;
		while (str[i] != 32 && str[i] != 9 && str[i] != 10 && str[i] != '\0')
			i++;
	}
	return (word_putter(count, str));
}
