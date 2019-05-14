/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstepina <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/13 20:59:07 by mstepina          #+#    #+#             */
/*   Updated: 2019/05/13 21:15:03 by mstepina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main (int ac, char **av)
{
	int i;
	int count;
	char c;
	
	count = 1;
	i = 0;
	if (ac == 2)
	{
		while (av[1][i])
		{
			c = av[1][i];
			if (c >= 'A' && c <='Z')
			   count = (c - 'A' + 1);
			else if (c >= 'a' && c <='z')
				count = (c - 'a' + 1);
			else
				count = 1;
			while (count > 0)
			{
				write (1, &c, 1);
				count--;
			}
			i++;
		}
	}
	write (1, "\n", 1);
	return (0);
}
