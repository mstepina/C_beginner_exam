/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/14 09:29:59 by exam              #+#    #+#             */
/*   Updated: 2019/05/14 09:47:24 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int not_seen_before(char *s, char c, int pos)
{
	int i;

	i = 0;
	while (i < pos)
	{
		if (s[i] == c)
			return (0);
		i++;
	}
	return (1);
}
int main (int ac, char **av)
{
	int i;
	int j;

	i = 0;
	j = 0;
	if  (ac == 3)
	{
		while(av[1][i])
		{
			if(not_seen_before(av[1], av[1][i], i))
				write(1, &av[1][i], 1);
			i++;
		}
		while (av[2][j])
		{
			if(not_seen_before(av[1], av[2][j], i) && 
					not_seen_before (av[2], av[2][j], j))
				write (1, &av[2][j], 1);
			j++;
		}
	}
	write (1, "\n", 1);
	return (0);
}
