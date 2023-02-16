void	rush(int x, int y);

int	arg_checker(char *argv[], int *x, int *y)
{
	int	i;
	int	j;
	int	total;

	i = 1;
	while (argv[i])
	{
		j = 0;
		total = 0;
		while (argv[i][j])
		{
			if (!(argv[i][j] >= '0' && argv[i][j] <= '9'))
				return (1);
			total *= 10;
			total += argv[i][j] - 48;
			j++;
		}
		if (i == 1)
			*x = total;
		else
			*y = total;
		i++;
	}
	return (0);
}

int	main(int argc, char *argv[])
{
	int	x;
	int	y;
	int	checker;

	if (argc != 3 || !argv[1] || !argv[2])
		return (1);
	checker = arg_checker(argv, &x, &y);
	if (checker == 1 || x == 0 || y == 0)
		return (1);
	rush(x, y);
	return (0);
}
