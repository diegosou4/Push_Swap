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

int find_indexmin(t_node **stack, int min, int sizestack)
{
    int indexa;
    indexa = 0;
    t_node *ptrstart;
    ptrstart = (*stack);
    while((sizestack - indexa) != 0)
    {
        if(ptrstart->num == min)
        {
            break;
        }
        ptrstart = ptrstart->next;
        indexa++;
    }
    return(indexa);

}

int findminnum(t_node **stack)
{
    int min;

    min = (*stack)->num;
    t_node *current;
    current = (*stack)->next;
    while(current != NULL)
    {
        if(current->num < min)
        {
            min = current->num;
        }
        current = current->next;
    }
    return(min);
}

int findmax(t_node **stack)
{
    int max;

    max = (*stack)->num;
    t_node *current;

    current = (*stack);
    while (current != NULL)
    {
        if(current->num > max)
        {
            max = current->num;
        }
        current = current->next;
    }
    return(max);
    


}

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


