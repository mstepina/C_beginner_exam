/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/30 10:49:22 by exam              #+#    #+#             */
/*   Updated: 2019/07/30 12:09:15 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int count_digits(int n)
{
	int i;
	i = 0;
	if (n == 0)
		return (1);
	while (n > 0)
	{
		n /= 10;
		i++;
	}
	return (i);
}

int ft_strlen(char *str)
{
	int i;
	i = 0;
	while (str[i])
		i++;
	return(i);
}

char *revstr(char *str)
{
	int i;
	int j;
	char temp;
	
	i = 0;
	j = ft_strlen(str) - 1;
	while (i < j)
	{
		temp = str[i];
		str[i] = str[j];
		str[j] = temp;
		i++;
		j--;
	}
	return(str);
}

char	*ft_itoa(int nbr)
{
	int i;
	char *str;
	int digits;
	int neg;
	int min;
  
  min = 0;
	neg = 0;
  i = 0;
	if (nbr < 0)
	{
		if (nbr == -2147483648)
		{	
			nbr = 147483648;
			min = 1;
		}
		else
			nbr = -nbr;
		neg = 1;
	}
	digits = count_digits(nbr);
	str = (char *) malloc((sizeof(char)) *(digits + neg + min  + 1));
	while(i < digits)
	{
		str[i] = (nbr % 10)  + '0';
		nbr /= 10;
		i++;
	}
	if(neg)
	{
		if (min)
		{
			str[i] = '2';
			i++;
		}
		str[i] = '-';
		i++;
	}
	str[i] = '\0';
	str = revstr(str);
	return (str);
}
