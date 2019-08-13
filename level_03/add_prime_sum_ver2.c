/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_prime_sum.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/13 09:49:56 by exam              #+#    #+#             */
/*   Updated: 2019/08/13 10:29:34 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_atoi(char *str)
{
	int i = 0;
	int res = 0;
	int sign = 0;
	while ((str[i] < '0' || str[i] > '9') && str[i] != '-')
		i++;
	if (str[i] == '-')
	{
		sign = 1;
		i++;
	}
	while (str[i] && str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10 + (str[i] - '0');
		i++;
	}
	if (sign)
		res *= -1;
	return (res);
}

int is_prime(int n)
{
	int i = 2;
	while (i < n)
	{
		if (n % i == 0)
			return(0);
		i++;
	}
	return (1);
}

void ft_putnbr(int n)
{
	char c;
	if (n > 9)
	{
		ft_putnbr (n / 10);
		ft_putnbr(n % 10);
	}
	else
	{
		c = '0' + n;
		write(1, &c, 1);
	}
}

int main(int ac, char **av)
{
	int n;
	int sum = 0;
	int i = 2;

	if (ac == 2)
	{
		n = ft_atoi(av[1]);
		if (n <= 0)	
			write(1, "0", 1);
		else
		{
			while(i <= n)
			{
				if (is_prime(i))
					sum += i;
				i++;
			}
			ft_putnbr(sum);
		}
		write (1, "\n", 1);
	}
	else
		write(1,"0\n", 2);
	return (0);
}
