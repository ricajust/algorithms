/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rda-silv <rda-silv@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 21:29:21 by rda-silv          #+#    #+#             */
/*   Updated: 2022/11/12 09:07:06 by rda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "algorithm.h"

int	main(int argc, char **argv)
{
	// t_node	*lst;
	size_t	numbers[10000] = INPUT;

	printf("Qunatity arguments: %d\n\n", argc);
	if (*argv[1] == '1')
	{
		selection_sort(numbers);
	}
	else if (*argv[1] == '2')
	{
		create_list();
	}
	return (0);
}
