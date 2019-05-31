/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstepina <mstepina@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/13 22:17:49 by mstepina          #+#    #+#             */
/*   Updated: 2019/05/31 16:28:06 by mstepina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int	ft_list_size(t_list *begin_list)
{
	int count;

	count = 0;
	if (!begin_list)
		return (0);
	while(begin_list)
	{
		begin_list = begin_list->next;
		count++; 
	}
	return (count);
}

/*
#include <stdlib.h>
#include <stdio.h>

t_list *new(void *data)
{
	t_list *n;
	
	n = (t_list *)malloc(sizeof(t_list));
	if (n)
	{
		n ->data = data;
		n ->next = NULL;
	}
	return (n);
}
int main ()
{
	t_list *one, *two, *three; 
	one = new ("one");
	two = new("two");
	three = new ("three");
	one ->next = two;
	two->next = three;
	printf("%d\n", ft_list_size(one));
	return (0);
}
*/
