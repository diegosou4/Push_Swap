/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_quickutils.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diegmore <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 12:39:31 by diegmore          #+#    #+#             */
/*   Updated: 2024/01/29 12:39:33 by diegmore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"




int havemin(t_node **stack, int pivot)
{

    t_node *ptr;

    ptr = (*stack);

    while(ptr)
    {
        if(ptr->num < pivot)
        {
            return(1);
        }
        ptr = ptr->next;
    }
    return(0);
}