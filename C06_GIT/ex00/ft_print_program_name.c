/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogpere <diogpere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 09:23:58 by diogpere          #+#    #+#             */
/*   Updated: 2023/02/04 20:09:47 by diogpere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	int	i;

	i = 0;
	while (argv[argc - 1][i] != '\0')
	{
		write(1, &argv[argc - 1][i], 1);
		i++;
	}
	write(1, "\n", 1);
	return (0);
}
