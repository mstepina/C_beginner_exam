/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/07 12:25:39 by exam              #+#    #+#             */
/*   Updated: 2019/05/07 12:41:04 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int main(int ac, char **av)
{
	int res;

	res = 0;
	if (ac != 4)
		write (1, "\n", 1);
	else
	{
		if (av[2][0] == '+')
			res = atoi(av[1]) + atoi(av[3]);
		else if(av[2][0] == '-')
			res = atoi(av[1]) - atoi(av[3]);
		else if(av[2][0] == '*')
			res = atoi(av[1]) * atoi(av[3]);
		else if(av[2][0] == '/')
			res = atoi(av[1]) / atoi(av[3]);
		else 
			res = atoi(av[1]) % atoi(av[3]);
		printf("%d", res);
		printf("\n");
	}
	return (0);
}
