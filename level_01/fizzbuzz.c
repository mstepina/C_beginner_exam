/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizzbuzz.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstepina <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/12 12:34:42 by mstepina          #+#    #+#             */
/*   Updated: 2019/08/12 12:53:51 by mstepina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

 #include <unistd.h>

void ft_putnbr(int n)
{
	char c;
	if (n > 9)
	{
		ft_putnbr(n / 10);
		ft_putnbr (n % 10);
	}
	else
	{
		c = '0' + n;
		write(1, &c, 1);
	}
}

int main()
{
	int n;

	n = 1;
	while (n <= 100)
	{
		if (n % 3 == 0)
			write(1, "fizz", 4);
		if (n % 5 == 0)
			write (1, "buzz", 4);
		else if (n % 3 != 0 && n % 5 != 0)
			ft_putnbr(n);
		write(1, "\n", 1);
		n++;
	}
	return (0);
}
