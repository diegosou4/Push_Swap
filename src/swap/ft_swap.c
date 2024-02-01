/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diegmore <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 15:03:40 by diegmore          #+#    #+#             */
/*   Updated: 2024/02/01 15:03:41 by diegmore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"


void freetwo(t_node **stacka, t_node **stackc)
{
    free(stacka);
    free(stackc);
    exit(0);
}

void ft_swap(t_node **stacka, t_node **stackc)
{
    t_node *ptr;

    ptr = (*stacka)->next;

    if((*stacka)->num > ptr->num)
    {
        swap(stacka);
        ft_printf("sa\n");
    }
    freetwo(stacka,stackc);
}