/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lcm.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/25 10:17:57 by exam              #+#    #+#             */
/*   Updated: 2019/06/25 10:37:31 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int    lcm(unsigned int a, unsigned int b)
{
	unsigned int mult;
	unsigned int other;
	unsigned int res;
	unsigned int i;

	if (a == 0 || b == 0)
		return (0);
	if (a > b)
	{
		mult = a;
		other = b;
	}
	else
	{
		mult = b;
		other = a;
	}
	i = 2;
	res = mult;
	while (res % other != 0)
	{
		res = mult * i;
		i++;
	}
	return (res);
}
