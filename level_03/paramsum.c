/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   paramsum.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/18 10:17:24 by exam              #+#    #+#             */
/*   Updated: 2019/06/18 11:01:29 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void  ft_putnbr(int n)
{
 	int res;

	res = 0;
	if (n > 9)
		ft_putnbr(n /10);
	n = n % 10;
	res = '0' + n;
	write(1, &res, 1);
}

int main (int ac, char **av)
{
	int i;

	i = 1;
	if (ac > 1)
	{
		while (av[i])
			i++;
	    ft_putnbr(i- 1);
		write(1, "\n", 1);
	}
	else
		write(1, "0\n", 2);
	return(0);
}
