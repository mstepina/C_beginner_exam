/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_a.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 09:04:54 by exam              #+#    #+#             */
/*   Updated: 2019/05/21 09:15:25 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int ac, char **av)
{
	int i;

	i = 0;
	if(ac == 2)
	{
		while(av[1][i])
		{
			if(av[1][i] == 'a')
			{
				write(1, "a", 1);
				break;
			}
			i++;
		}
		write(1, "\n", 1);
	}
	else
	{
		write(1, "a\n", 2);
		return(0);
	}
}
