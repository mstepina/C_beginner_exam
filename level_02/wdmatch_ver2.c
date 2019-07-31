/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wdmatch.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/30 09:32:49 by exam              #+#    #+#             */
/*   Updated: 2019/07/30 09:48:50 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putstr(char *s)
{
	int i;
	i = 0;
	while(s[i])
		write(1, &s[i++], 1);
}

int main(int ac, char **av)
{
	if (ac == 3)
	{
		int i, j;

		i = 0;
		j = 0;
		while(av[1][i] && av[2][j])
		{
			while(av[2][j])
			{
				if (av[1][i] == av[2][j])
					i++;
				j++;
			}
		}
		if (av[1][i] == '\0')
			ft_putstr(av[1]);
		write(1, "\n", 1);
	}
	else
		write(1, "\n", 1);
	return (0);
}
