/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotone.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/07 09:33:34 by exam              #+#    #+#             */
/*   Updated: 2019/05/07 09:47:51 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main (int ac, char **av)
{
	int i;

	i = 0;
	if (ac != 2)
		write(1,"\n", 1);
	else
	{
		while(av[1][i])
		{
			if((av[1][i] >= 'a' && av[1][i] < 'z') || (av[1][i] >= 'A' && av[1][i] < 'Z'))
				av[1][i] += 1;
			else if (av[1][i] == 'z')
				av[1][i] = 'a';
			else if (av[1][i] == 'Z')
				av[1][i] = 'A';
			write(1,& av[1][i], 1);
			i++;	
		}
		write(1, "\n", 1);
	}
	return (0);
}
