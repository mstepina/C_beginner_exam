/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstepina <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/13 21:21:50 by mstepina          #+#    #+#             */
/*   Updated: 2019/05/13 22:09:23 by mstepina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
 
int	ft_atoi(const char *str)
{
	int i;
	int sign;
	int res;

	sign = 1;
	res = 0;
	i = 0;
	while (str[i] && str[i] > 0 && str[i] < 33) 
		i++;
	if (str[i] == '-')
		sign = -1;
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10 + (str[i] - '0');
		i++;
	}
	return (sign * res);
}
