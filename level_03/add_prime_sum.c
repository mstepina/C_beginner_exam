/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_prime_sum.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstepina <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/29 13:31:01 by mstepina          #+#    #+#             */
/*   Updated: 2019/07/29 14:11:17 by mstepina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int atoi(char *str)
{
	int i;
	int res;

	i = 0;
	res = 0;
	while(str[i] > 0 && str[i] < 32)
		i++;
	while(str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10 + (str[i] - '0');
		i++;
	}
	return (res);
}

void ft_putnbr(int n)
{
	char c;

	if (n > 9)
	{
		ft_putnbr(n /10);
		ft_putnbr (n % 10);
	}
	else
	{
		c = n + '0';
		write(1, &c, 1);
	}
}

int is_prime(int n)
{
	int i;

	i = 2;
	while (i < n)
	{
		if (n % i == 0)
			return (0);
		i++;
	}
	return (1);
}
int add_prime_sum(int n)
{
	int i;
	int sum;

	sum = 0;
	i = 2;
	while (i <= n)
	{
		if(is_prime(i))
			sum = sum + i;
		i++;
	}
	return(sum);
}

int main(int ac, char **av)
{
	if (ac == 2 && av[1][0] != '-') 
		ft_putnbr(add_prime_sum(atoi(av[1])));
	else
		write(1, "0", 1);
	write(1, "\n", 1);
	return (0);
}
