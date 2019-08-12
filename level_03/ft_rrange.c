/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrange.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstepina <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/11 15:06:10 by mstepina          #+#    #+#             */
/*   Updated: 2019/08/11 16:12:27 by mstepina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int     *ft_rrange(int start, int end)
{
	int size;
	int *res;

	if (end > start)
		size = end - start + 1;
	else
		size = start - end + 1;
	res = (int *)(malloc((sizeof(int)) * size));
	while(--size >= 0)
	{
		res[size] = start;
		if (end > start)
			start++;
		else
			start--;
	}
	return(res);
}

/*
#include <stdio.h>
int main()
{
	int i = 0;
	int *res = NULL;
	res = ft_rrange(0,-3);
	while(i <= 3)
	{
		printf("%d\n", res[i]);
		i++;
	}
	return (0);
}
*/
