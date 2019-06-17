/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fprime.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/14 11:03:12 by exam              #+#    #+#             */
/*   Updated: 2019/05/14 12:02:23 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int		main(int ac, char **av)
{
	int n;
	int i;

	if (ac == 2)
	{
		i = 2;
		n = atoi(av[1]);
		if (n == 1)
			printf("1");
		while (i <= n)
		{
			while (n % i == 0)
			{
				printf("%d", i);
				if (i < n)
					printf("*");
				n = n / i;
			}
			i++;
		}
	}
	printf("\n");
	return (0);
}
