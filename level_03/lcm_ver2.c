/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lcm.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/30 10:06:23 by exam              #+#    #+#             */
/*   Updated: 2019/07/30 10:39:03 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int    lcm(unsigned int a, unsigned int b)
{
	int lcm;
	
	lcm = 0;
	if ( a == 0 || b == 0)
		return (0);
	if (a > b)
		lcm = a;
	else
		lcm = b;
	while (lcm % a != 0 || lcm % b != 0)
		lcm++;
	return (lcm);
}

