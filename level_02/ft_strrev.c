/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstepina <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/01 14:31:54 by mstepina          #+#    #+#             */
/*   Updated: 2019/07/01 14:57:46 by mstepina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_strlen(char *s)
{
	int i;

	i = 0;
	while(s[i])
		i++;
	return (i);

}

char    *ft_strrev(char *str)
{
	int  temp, head, tail;

	temp = 0;
	head = 0;
	tail = ft_strlen(str) - 1;
	while (head < tail)
	{
		temp = str[head];
		str[head] = str[tail];
		str[tail] = temp;
		head++;
		tail--;
	}
	return (str);
}

/*
#include <stdio.h>

int main()
{
	char s[] = "Hello, doggie";
	ft_strrev(s);
	printf("%s", s);
	return (0);
}
*/
