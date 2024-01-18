/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_issorted.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diegmore <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 15:01:25 by diegmore          #+#    #+#             */
/*   Updated: 2024/01/18 15:01:26 by diegmore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "../push_swap.h"


int is_sorted(t_node **stacka)
{
    t_node *p;
    p = (*stacka);
    while(p->next)
    {
        t_node *ptr;
        ptr = p->next;
        while(ptr)
        {
            if(p->num > ptr->num)
                return(0);
            else
                ptr = ptr->next;
        }
        p = p->next;
    }
    return(1);
}