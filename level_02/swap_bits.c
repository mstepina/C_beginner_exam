/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_bits.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/28 09:27:37 by exam              #+#    #+#             */
/*   Updated: 2019/05/28 09:57:12 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned char	swap_bits(unsigned char octet)
{
	return (((octet <<  4) | (octet >> 4)));
}

/*
#include <stdio.h>
#include <unistd.h>

int  print_bits(unsigned char octet)
{
	int n;
	int div;

	div = 128;
	n = octet;
	while(div != 0)
	{
		if (n >= div)
		{
			write(1, "1", 1);
			n = n % div;
		}
		else
			write(1, "0", 1);
		div = div / 2;
	}
	return (0);
}

int main ()
{
	unsigned char n;
	unsigned char m;
	n = '9';
	printf("%c\n", print_bits(n));
	m = swap_bits(n);
	printf("%c\n", print_bits(m));
	return (0);
}
*/
