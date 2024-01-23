/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_usecomands.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diegmore <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 16:04:08 by diegmore          #+#    #+#             */
/*   Updated: 2024/01/23 16:04:09 by diegmore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "../push_swap.h"

void ss(t_node  **stacka, t_node **stackb)
{
    swap(stacka);
    swap(stackb);
    ft_printf("ss\n");
}
void rr(t_node **stacka, t_node **stackb)
{
    rotate(stacka);
    rotate(stackb);
    ft_printf("rr\n");
}

void rrr(t_node **stacka, t_node **stackb)
{
    reverse_rotate(stacka);
    reverse_rotate(stackb);
    ft_printf("rrr\n");
}
