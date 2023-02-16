void	ft_putchar(char c);

void	ft_print_chars(int x, char beg_char, char mid_char, char end_char)
{
	int	i;

	i = 1;
	while (i <= x)
	{
		if (i == 1)
			ft_putchar(beg_char);
		else if (i <= (x - 1))
			ft_putchar(mid_char);
		else if (i == x)
			ft_putchar(end_char);
		i++;
	}
}

void	rush(int x, int y)
{
	int		i;

	i = 1;
	while (i <= y)
	{
		if (i == 1)
			ft_print_chars(x, '/', '*', '\\');
		else if (i <= (y - 1))
			ft_print_chars(x, '*', ' ', '*');
		else if (i == y)
			ft_print_chars(x, '\\', '*', '/');
		ft_putchar('\n');
		i++;
	}
}
