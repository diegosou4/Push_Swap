/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_quickutils2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diegmore <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 17:30:54 by diegmore          #+#    #+#             */
/*   Updated: 2024/01/29 17:30:56 by diegmore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "../push_swap.h"


int findbigproxstart(t_node **stack, int numstackb)
{
    int num;
    int index;
    t_node *ptr;
    ptr = (*stack);
    int i;
    i = 0;
    index = 0;
    num = ptr->num;

    while(ptr != NULL)
    {
        if(num <= ptr->num)
        {
            num = ptr->num;
            if(index < (ptr->num - numstackb))
            {
                i++;
                index = ptr->num - numstackb;
            }
        }
        ptr = ptr->next;
    }
    return(i);
}

int findbigproxfinal(t_node **stack,int numstackb)
{
    int num;
    int index;
    t_node *ptr;
    ptr = (*stack);
    ptr = find_last(ptr);
    int i;
    i = 0;
    index = 0;
    num = ptr->num;

    while(ptr != NULL)
    {
        if(num <= ptr->num)
        {
            num = ptr->num;
            if(index < (ptr->num - numstackb))
            {
                i++;
                index = ptr->num - numstackb;
            }
        }
        ptr = ptr->previous;
    }
    return(i);
}



