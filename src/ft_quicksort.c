/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_quicksort.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diegmore <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 16:42:27 by diegmore          #+#    #+#             */
/*   Updated: 2024/01/25 16:42:29 by diegmore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "../push_swap.h"

int find_indexa(t_node **stack, int pivot, int sizestack)
{
    int indexa;
    indexa = 0;
    t_node *ptrstart;
    ptrstart = (*stack);
    while((sizestack - indexa) != 0)
    {
        if(ptrstart->num < pivot)
        {
            break;
        }
        ptrstart = ptrstart->next;
        indexa++;
    }
    return(indexa);

}

int find_indexb(t_node **stack, int pivot, int sizestack)
{
    int indexb;
    indexb = 0;
    t_node *ptrlast;

    ptrlast = find_last(*stack);

    while((sizestack - indexb) != 0)
    {
        if(ptrlast->num < pivot)
        {
            break;;
        }
        ptrlast = ptrlast->previous;
        indexb++;
    }
    return(indexb);

}


void findindex(t_node **stack, int pivot)
{
    int indexa;     
    int indexb;
    int nodesize;
  
    if(indexa < indexb)
    {
        while((*stack)->num > (*stack)->next->num && havemin(stack, pivot) == 1)
        {
            rchoose(stack,2);
        }
    }else if(indexb < indexa)
    {
        while((*stack)->num > (*stack)->next->num && havemin(stack, pivot) == 1)
            {
            rrchoose(stack,2);
        }
    }
}




int givemepivot(t_node **stacka)
{
    t_node *pstack;
    t_node *last;
    int nodesize;
    int i;
    int pivot;

    pstack = (*stacka);
    last = find_last(pstack);
    nodesize = ft_nodesize(stacka);
    i = 0;
    nodesize /= 2;
    while(i < nodesize)
    {
        pstack = pstack->next;
        i++;
    }
    pivot = pstack->num;
    pstack = (*stacka);
    pivot = (pstack->num + last->num + pivot) / 3;
    return(pivot);
    
}


void quicksort(t_node **stacka,t_node **stackb)
{
    int pivot;

    pivot = givemepivot(stacka);

    findindex(stacka,pivot);
    pchoose(stacka,stackb,1);

}