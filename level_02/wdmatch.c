/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wdmatch.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/18 09:30:08 by exam              #+#    #+#             */
/*   Updated: 2019/06/18 10:09:10 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_strlen(char *s)
{
	int i;

	i = 0;
	while(s[i])
		i++;
	return (i);
}

void ft_putchar(char *s)
{
	while(*s)
	{
		write(1, s, 1);
		s++;
	}
}

int main(int ac, char **av)
{
	int i;
	int j;
	int count;

	count = 0;
	i = 0;
	j = 0;
	if(ac == 3)
	{
		while (av[2][j] && av[1][i]) 
		{
			if (av[2][j] == av[1][i])
			{
				count++;
				i++;
			}
			j++;
		}
		if (count == ft_strlen(av[1]))
			ft_putchar(av[1]);
		write(1, "\n", 1);
	}
	else
		write(1, "\n", 1);
	return(0);
}
