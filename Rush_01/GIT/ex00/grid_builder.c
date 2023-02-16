/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   grid_builder.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogpere <diogpere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 20:46:33 by diogpere          #+#    #+#             */
/*   Updated: 2023/02/05 20:46:36 by diogpere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char *combinator(char topdown, char bottomup, char *forbidden, int *past_index, int collum);
void printer(char **collums);

// Puts the reequested numbers into a given column in the main 4x4 grid.
void putter_collum(char **collumns, char *collumn, int index)
{
    int i;

    i = 0;
    while (i < 4)
    {
        collumns[i][index] = collumn[i];
        i++;
    }
}

// Finds any numbers that are duplicated in a row and returns the collum that the duplicated number was in.
char *duplicate_finder(char **collums, int x, int y, int *index1, int *index2)
{
    int j;
    int i;
    char *collum;

    collum = (char *)malloc(4);

    j = 0;
    i = 0;
    while (j < x)
    {
        if (collums[y][j] == collums[y][x])
        {
            *index1 = x;
            *index2 = y;
            while (i < 4)
            {
                collum[i] = collums[i][x];
                i++;
            }
            collum[i] = '\0';
            return collum;
        }
        j++;
    }

    return 0;
}

// Fills up the grid (without checking for duplicates yet) with the first combination that is available from the COMBINATOR function in "combinator.c".
void first_fill(char **collums, char **words, char *test_collumn, int *past_index)
{
    int index;
    int argv_index;

    index = 0;
    argv_index = 0;
    while ((argv_index + 4) < 8)
    {
        test_collumn = combinator(words[argv_index][0], words[argv_index + 4][0], "\0", past_index, argv_index);
        putter_collum(collums, test_collumn, index);
        index++;
        argv_index++;
    }
}

// Checks if there are still duplicated numbers in the grid.
int final_whisper(char **collums)
{
    int i;
    int j;
    int k;

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
                    return 1;
                k++;
            }
            j++;
        }
        i++;
    }

    return 0;
}

// Searches for duplicates in the grid and calls the COMBINATOR function for another combination different than any that the program has already tried for the collum.
void fixer(char **collums, char **words, char *test_collumn, int *past_index)
{
    int y;
    int x;
    int index1;
    int index2;
    char *forbidden;

    while (y < 4)
    {
        x = 0;
        while (x < 4)
        {
            if ((forbidden = duplicate_finder(collums, x, y, &index1, &index2)))
            {
                test_collumn = combinator(words[index1][0], words[index1 + 4][0], forbidden, past_index, x);
                if (test_collumn)
                    putter_collum(collums, test_collumn, index1);
                break;
            }
            x++;
        }
        y++;
    }
}

// Is the main function that controls all the other functions that help with finding duplicates and switching their collumn out for a different combination.
void final_fix(char **collums, char **words, char *test_collumn, int *past_index)
{

    int y;

    y = 0;

    fixer(collums, words, test_collumn, past_index);

    if (final_whisper(collums))
    {
        y = 0;
        while (y < 4)
        {
            past_index[y] = 0;
            y++;
        }

        fixer(collums, words, test_collumn, past_index);
    }
}
