/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstepina <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/06 17:38:48 by mstepina          #+#    #+#             */
/*   Updated: 2019/05/06 17:53:13 by mstepina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



int		max(int* tab, unsigned int len)
{
	int res;
	unsigned int i;

	if (len == 0)
		return (0);
	i = 1;
	res = tab[0];
	while (i < len)
	{
		if (tab[i] > res)
			res = tab[i];
		i++;
	}
	return(res);
}

