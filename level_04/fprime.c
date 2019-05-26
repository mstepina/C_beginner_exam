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

int is_prime(int n)
{
	int i;

	i = 2;
	while (i < n)
	{
		if( n % i == 0)
			return (0);
		i++;
	}
	return (1);
}


int main(int ac, char **av)
{
	int n;
	int i;

	i = 2;
	if(ac == 2)
	{
		n = atoi(av[1]);
		if (is_prime(n))
			printf("%d", n);
		else
		{
			while (i <= n)	
			{
				while (is_prime(i) && (n % i == 0))
				{
					printf("%d", i);
					if (i < n)
						printf("%s", "*");
					n = n / i;	
				}
				i++;
			}
		}
	}
	printf("\n");
	return (0);
}
