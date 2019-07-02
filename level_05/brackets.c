/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   brackets.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstepina <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/01 16:10:30 by mstepina          #+#    #+#             */
/*   Updated: 2019/07/01 17:30:17 by mstepina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

#define BUFF_SIZE 4096

static int match_brackets(char a, char b)
{
	if ((a == '(' && b == ')') ||  (a == '{' && b == '}') || 
			( a == '[' && b == ']'))
		return (1);
	return (0);
}

static int check_brackets (char *str)
{
	int i;
	int top;
	int arr[BUFF_SIZE];

	i = 0;
	top = 0;
	while (str[i])
	{
		if (str[i] == '(' || str[i] == '[' || str[i] == '{')
		{	arr[top] = str[i];
			top++;
		}
		if (str[i] == ')' || str[i] == '}' || str[i] == ']')
			if (!match_brackets(arr[--top], str[i]))
				return (0);
		i++;
	}
	return (!top);
}

int main(int ac, char **av)
{
	int i;

	i = 1;
	if (ac > 1)
	{
		while(av[i])
		{
			if (check_brackets(av[i]))
				write(1, "OK\n", 3);
			else
				write (1, "Error\n", 6);
			i++;
		}
	}
	else
		write (1, "\n", 1);
	return (0);
}
