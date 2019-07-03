/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   expand_str.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/02 10:10:59 by exam              #+#    #+#             */
/*   Updated: 2019/07/02 10:54:38 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int is_space(char c)
{
	return (c == '\t' || c == ' ');
}
int main(int ac, char **av)
{
	int i;
	int start;

	i = 0;
	start = 0;
	if (ac == 2)
	{
		while(av[1][i]) 
		{
			while(is_space(av[1][i]))
			{
				if (i == 0)
					start = 1;
			   i++;	
			}
			if (start == 0 && i !=0 && av[1][i] != '\0')
			{
				write (1, "   ", 3);
			}
			else
				start = 0;
			while (!is_space(av[1][i]) && av[1][i])
			{
				write(1, &av[1][i], 1);
			   	i++;
			}	
		}
	}
	write(1, "\n", 1);
	return (0);
}
