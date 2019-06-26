/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_int_tab.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/25 11:36:06 by exam              #+#    #+#             */
/*   Updated: 2019/06/25 12:02:22 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void sort_int_tab(int *tab, unsigned int size)
{
	unsigned int i;
	unsigned int j;
	int temp;

	temp = 0;
	i = 0;
	j = 1;
	if (size > 1)
	{
		while (i < size - 1)
		{
			while (j < size)
			{
				if (tab[i] > tab[j])
				{
					temp = tab[i];
					tab[i] = tab[j];
					tab[j] = temp;
				}
				j++;
			}
			i++;
			j = i + 1;
		}
	}
}

