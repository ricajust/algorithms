/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   selection_sort.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rda-silv <rda-silv@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 08:52:35 by rda-silv          #+#    #+#             */
/*   Updated: 2022/11/09 21:54:24 by rda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "algorithm.h"

void	selection_sort(size_t *numbers)
{
	int		i;
	int		j;
	int		aux;
	clock_t	t;

	t = clock();
	i = 0;
	while (i < 10000)
	{
		j = 0;
		while (j < 10000)
		{
			if (numbers[i] < numbers[j])
			{
				aux = numbers[i];
				numbers[i] = numbers[j];
				numbers[j] = aux;
			}
			j++;
		}
		i++;
	}
	t = clock() -t;
	i = 0;
	while (i < 10000)
	{
		printf("%ld\n", numbers[i]);
		i++;
	}
	printf("\n\nTime: %ld - %f\n\n", t, ((float)t)/CLOCKS_PER_SEC);
}
