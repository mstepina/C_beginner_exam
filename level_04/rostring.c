/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rostring.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstepina <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/29 15:32:38 by mstepina          #+#    #+#             */
/*   Updated: 2019/07/29 16:08:46 by mstepina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int is_space(char c)
 {
	if (c == ' ' || c == '\t')
        return(1);
	return(0);
 }

 void rostring(char *str)
 {
	int i;
	int first_word_length;
 
    i = 0;
    first_word_length = 0;
	while(str[i])
	{
		while(is_space(str[i]))
	        i++;
        if(str[i] && !is_space(str[i]))
		{
			if(first_word_length == 0)
			{
				while (str[i] && !is_space(str[i]))
				{
					i++; 
					first_word_length++;
				}
			}
	
			else
			{
				while(str[i] && !is_space(str[i]))
					write(1, &str[i++], 1);
				if(is_space(str[i]) || str[i] == '\0')
				{
					while (is_space(str[i]))
						i++;
					write(1, " ", 1);
				}	
			}
		}
	}
	i = 0;
    while (is_space(str[i]))
		i++;
	while(first_word_length--)
		write(1,&str[i++], 1);
}

int main( int ac, char **av)
{
	if (ac > 1 && *av[1])
		rostring(av[1]);
	write(1, "\n", 1);
	return (0);
}
