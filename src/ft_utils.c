/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diemorei <diemorei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 12:35:41 by diegmore          #+#    #+#             */
/*   Updated: 2024/01/15 14:46:32 by diemorei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "../push_swap.h"

int len_darray(char **num)
{
    int i;
    i = 0;

    while(num[i])
        i++;

    return(i);
}

t_node *find_last(t_node *stack)
{
    t_node *last;

    last = stack;
    while (last->next)
        last = last->next;
    return (last);
}

int	ft_nodesize(t_node **stack)
{
	int	i;

    t_node *pstack;
    pstack = (*stack);
	i = 0;
	while (pstack != NULL)
	{
		i++;
		pstack = pstack->next;
	}
	return (i);
}

