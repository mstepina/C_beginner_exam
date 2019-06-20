/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_int_tab.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/18 11:44:19 by exam              #+#    #+#             */
/*   Updated: 2019/06/18 12:29:15 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void sort_int_tab(int *tab, unsigned int size)
{
	unsigned int i;
	unsigned int j;
	int temp;

	i = 0;
	j = 1;
	temp = 0;

	if (size > 1)
	{
		while(i < size - 1)
		{
	
			if (tab[i] > tab[j])
			{
				temp = tab[i];
				tab[i] = tab[j];
				tab[j] = temp;	
			}
			if(j == size - 1)
			{
				i++;
				j = i + 1;
			}
			else
				j++;
		}
	}
}
