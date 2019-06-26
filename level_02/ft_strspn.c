/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strspn.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/25 09:21:36 by exam              #+#    #+#             */
/*   Updated: 2019/06/25 10:09:57 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_strlen(const char *s)
{
	int i;

	i = 0;
	while (s[i])
	{
		i++;
	}
	return (i);
}

size_t	ft_strspn(const char *s, const char *accept)
{
	int i;
	int j;

	i = 0;
	if (ft_strlen(accept) == 0)
		return (0);
	while (s[i])
	{
		j = 0;
		while (accept[j] && s[i] != accept[j])
		{
			j++;
			if (j == ft_strlen(accept))
				return (i);
		}
		i++;
	}
	return (i);
}
