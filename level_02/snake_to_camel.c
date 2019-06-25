/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   snake_to_camel.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstepina <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/24 17:14:49 by mstepina          #+#    #+#             */
/*   Updated: 2019/06/24 18:02:39 by mstepina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int main(int ac, char **av)
{
	int i;
	int new_len;
	int old_len;
	int j;
	char *s;

	i = 0;
	j = 0;
	new_len = 0;
	old_len = 0;
	s = NULL;
	if (ac == 2)
	{
		while(av[1][i])
		{
			if(av[1][i] != '_')
				new_len++;
			i++;
		}
		old_len = i;
		s = (char *)malloc(sizeof(char) *(new_len + 1));
		if (s == NULL)
			return (1);
		i = 0;
		while(i < old_len)
		{
			if(av[1][i] == '_') 
			{
				i++;
				s[j] = av[1][i] - 32;
			}
			else
				s[j] = av[1][i];
			write(1, &s[j], 1);
			j++;
			i++;
		}
	}
	write(1, "\n", 1);
	return(0);
}
