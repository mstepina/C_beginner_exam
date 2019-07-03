/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alpha_mirror.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/02 09:49:19 by exam              #+#    #+#             */
/*   Updated: 2019/07/02 10:07:00 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int ac, char **av)
{
	int i;

	i = 0;
	if (ac == 2)
	{
		while (av[1][i])
		{
			if (av[1][i] >= 'a' && av[1][i] <= 'm') 
					av[1][i] = 'z' - (av[1][i] - 'a');
			else if	(av[1][i] >= 'A' && av[1][i] <= 'M')
				av[1][i] = 'Z' -(av[1][i] - 'A');
			else if (av[1][i] >= 'N' && av[1][i] <= 'Z')
				av[1][i] = 'A' + ('Z' - av[1][i]);
			else if (av[1][i] >= 'n' && av[1][i] <= 'z')
				av[1][i] = 'a' + ('z' - av[1][i]);
			write(1, &av[1][i], 1);
			i++;
		}
	}
	write(1,"\n", 1);
	return(0);
}
