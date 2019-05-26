/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tab_mult.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 09:52:07 by exam              #+#    #+#             */
/*   Updated: 2019/05/21 10:37:53 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_atoi(char *str)
{
	int res;
	int i;

	res = 0;
	i = 0;	
	while(str[i] && (str[i] >0 && str[i] <= 32))
		i++;
	while (str [i] && str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10 + (str[i] - '0');
		i++;
	}
	return(res);
}

void ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

void ft_putnbr(int n)
{

	char l;

	if (n > 9)
	{
		ft_putnbr(n /10);
		ft_putnbr (n % 10);
	}
	else
	{
		l = '0' + n;
		write(1, &l, 1);
	}
}

int main(int ac, char **av)
{
	int n;
	int mult;
	n = 1;
	mult = 0;
	if (ac == 2)
	{
		while (n < 10)
		{
			ft_putnbr(n);
			write(1, " x ", 3);
			ft_putstr(av[1]);
			write(1, " = ", 3);
			mult = n * ft_atoi(av[1]);
			ft_putnbr(mult);
		   	write(1, "\n", 1);
			n++;	
		}
	}
	else
		write(1, "\n", 1);
	return (0);
}
