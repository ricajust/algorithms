/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_handler.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rda-silv <rda-silv@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 21:39:28 by rda-silv          #+#    #+#             */
/*   Updated: 2022/11/12 09:07:32 by rda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "algorithm.h"

t_node	*create_list()
{
	t_node	*lst;

	lst = malloc (sizeof(t_node));
	lst->next = NULL;
	puts("List create!\n");
	return (lst);
}
