/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rostring.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/13 11:57:39 by exam              #+#    #+#             */
/*   Updated: 2019/08/13 12:55:02 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int is_space(char c)
{
	if (c == ' ' || c == '\t')
		return (1);
	return (0);
}

int main(int ac, char **av)
{
	int i = 0;
	int j = 0;
	if (ac > 1)
	{
		while (is_space(av[1][i]) && av[1][i])
			i++;
		while (!(is_space(av[1][i])) && av[1][i])
			i++;
		while (is_space(av[1][i]) && av[1][i])
			i++;
		while (av[1][i])
		{
			while (!(is_space(av[1][i])) && av[1][i])
				write(1, &av[1][i++], 1);
		   	if ((is_space(av[1][i]) && av[1][i]) || av[1][i] == '\0')
		   		write (1, " ", 1);
			while (is_space(av[1][i]) && av[1][i])
		  		i++;			
		}
		while (is_space(av[1][j]) && av[1][j])
			j++;
		while (is_space(av[1][j]) == 0 && av[1][j])
		{	
			write(1, &av[1][j], 1);
			j++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
