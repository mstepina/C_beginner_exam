/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_capitalizer.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstepina <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/24 18:31:06 by mstepina          #+#    #+#             */
/*   Updated: 2019/06/24 20:11:10 by mstepina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int is_space(char c)
{
	if (c == ' ' || c == '\t')
		return (1);
	return (0);
}

void capitalizer (char *str)
{
	int i;

	i = 0;
	while(str[i])
	{
		if ((is_space(str[i - 1]) || i == 0) &&
				(str[i] >= 'a' && str[i] <= 'z'))
			 str[i] -= 32;
		else if((!(is_space(str[i - 1])) && i != 0) &&
				(str[i] >='A' && str[i] <= 'Z'))
			str[i] += 32;
		write(1, &str[i], 1);
		i++;
	}
}

int main(int ac, char **av)
{
	int i;

	i = 1;
	if (ac > 1)
	{
		while(i < ac)
		{
			capitalizer(av[i]); 
			write (1,"\n",1);
			i++;
		}
	}
	else
		write(1, "\n", 1);
	return (0);
}
