/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   grid_creator.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogpere <diogpere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 17:28:09 by diogpere          #+#    #+#             */
/*   Updated: 2023/02/05 20:55:49 by diogpere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void first_fill(char **collums, char **words, char *test_collumn, int *past_index);
void final_fix(char **collums, char **words, char *test_collumn, int *past_index);
void row_maker(char **collums);
void printer(char **collums);
char *filler();

// Frees the memory allocated for the shown 4x4 grid at the end of the program.
void freer(char **collumns)
{
    int i;
    int j;

    i = 0;
    while (i < 4)
    {
        free(collumns[i]);
        i++;
    }

    free(collumns);
}

// Fills up each row that was allocated for the grid with a NULL character so
//  that there are no junk numbers in memory at the start of the program.
void row_maker(char **collums)
{
    int i;
    int j;
    int place;
    int num;

    i = 0;
    while (i < 4)
    {
        j = 0;
        while (j < 4)
        {
            collums[i][j] = '\0';
            j++;
        }
        i++;
    }
}

// Allocates memory for 4 strings to create each of the 4 rows of the 4x4 grid.
char *filler()
{
    char *row;

    row = (char *)malloc(4);

    return row;
}

// Prints the 4x4 magic square to the terminal once it is completely properly filled.
void printer(char **collums)
{
    int i;
    int j;

    i = 0;
    while (i < 4)
    {
        j = 0;
        while (j < 4)
        {
            write(1, &collums[i][j], 1);
            write(1, " ", 1);
            j++;
        }
        write(1, "\n", 1);
        i++;
    }
}

// Allocates memory for the 4x4 magic square and calls the functions needed to
//  input the right numbers according to the views given to the program.
void grid_caller(char **words)
{
    int i;
    char **collums;
    char *test_collumn;
    int *past_index;

    past_index = (int *)malloc(sizeof(int) * 4);
    collums = (char **)malloc(sizeof(char *) * 4);
    test_collumn = (char *)malloc(sizeof(char) * 4);

    i = 0;
    while (i < 4)
    {
        collums[i] = filler();
        i++;
    }

    i = 0;

    while (i < 4)
    {
        past_index[i] = 0;
        i++;
    }

    row_maker(collums);

    first_fill(collums, words, test_collumn, past_index);

    final_fix(collums, words, test_collumn, past_index);

    printer(collums);

    freer(collums);
}
