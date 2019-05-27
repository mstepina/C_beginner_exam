/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstepina <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 15:19:48 by mstepina          #+#    #+#             */
/*   Updated: 2019/05/27 16:07:36 by mstepina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int not_seen_before(char *str, char c, int pos)
{
	int i;

	i = 0;
	while(i < pos)
	{
		if(str[i] == c)
			return (0);
		i++;
	}
	return (1);
}

int main(int ac, char **av)
{
	int i;
	int j;

	i = 0;
	if (ac == 3)
	{
		while(av[1][i])
		{
			if (not_seen_before(av[1], av[1][i], i))
			{
				j = 0;
				while(av[2][j] &&  (av[1][i] != av[2][j-1]))
				{
					if(av[1][i] == av[2][j])
						write(1, &av[1][i], 1);
					j++;
				}
			}
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}


