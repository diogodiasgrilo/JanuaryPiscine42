/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   combinator.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogpere <diogpere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 20:46:51 by diogpere          #+#    #+#             */
/*   Updated: 2023/02/05 20:52:54 by diogpere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// Returns the length of a string.
int ft_strlen(char *str)
{
    int i;

    i = 0;
    while (str[i] != '\0')
        i++;

    return i;
}

// Compares two strings to see if all their characters are identical.
int ft_strcmp(char *one, char *two)
{
    int i;
    int count;

    count = 0;
    i = 0;
    while (one[i] != '\0')
    {
        if (one[i] == two[i])
            count++;
        i++;
    }

    if (count == ft_strlen(one))
        return 1;

    return 0;
}

// Seeks out a different combination with the same views for either a first fill of a 
// column or for a replacement for a column that had a duplicated number in a row.
char *seeker(char topdown, char bottomup, char *forbidden, int number_of, char **value, int *past_index, int index)
{
    int i;
    int j;
    int gate;

    i = past_index[index];
    gate = 0;

    while (i < number_of)
    {
        if (value[i + 1][1] == bottomup)
        {
            gate = 1;
            j = 0;
            if (ft_strcmp(value[i], forbidden))
            {
                gate = 0;
            }
        }
        if (gate)
        {
            past_index[index] = i;
            return value[i];
        }

        i += 2;
    }

    return 0;
}

// Contains all the combinations possible for each valid view on a 4x4 grid, this function 
// also call the seeker function with the right paramenters given the view nunber requested.
char *combinator(char topdown, char bottomup, char *forbidden, int *past_index, int collum)
{

    char	**value1;
	char	**value2;
	char	**value3;
	char	**value4;
	
	value1 = (char *[]){"4123", "12", "4312", "13", "4132", \
		"13", "4213", "12", "4231", "13", "4321", "14"};
	value2 = (char *[]){"3412", "22", "1423", "22", "2431", \
		"22", "3142", "22", "2413", "22", "3421", "22", "3214", "21", \
		"1432", "23", "2143", "22"};
	value3 = (char *[]){"2341", "32", "2134", "31", "2314", "31", \
		"1324", "31", "1243", "32"};
	value4 = (char *[]){"1234", "41"};

    if (topdown == '1')
    {
        return seeker(topdown, bottomup, forbidden, 12, value1, past_index, collum);
    }
    else if (topdown == '2')
    {
        return seeker(topdown, bottomup, forbidden, 18, value2, past_index, collum);
    }
    else if (topdown == '3')
    {
        return seeker(topdown, bottomup, forbidden, 10, value3, past_index, collum);
    }
    else if (topdown == '4')
    {
        return seeker(topdown, bottomup, forbidden, 2, value4, past_index, collum);
    }

    return 0;
}
