/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   expand_str.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/14 10:05:16 by exam              #+#    #+#             */
/*   Updated: 2019/05/14 10:44:27 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int is_space (char c)
{
	if (c == '\t' || c == ' ')
		return (1);
	return (0);
}

int main (int ac, char **av)
{
	int i;

	int is_word;

	i = 0;
	is_word = 0;
	if (ac == 2)
	{
		while(av[1][i])
		{
			while (is_space(av[1][i]))
			{
				i++;
			}
			if (is_word == 1 && av[1][i] != '\0') 
			{	
				write(1, "   ", 3);
				is_word = 0;
			}
			while (is_space(av[1][i]) == 0 && av[1][i] != '\0') 
			{
				is_word = 1;
				write(1, &av[1][i], 1);
				i++;
			}
		}
	}
	write (1, "\n", 1);
	return (0);
}
