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
    indexa = find_indexa(stack,pivot,ft_nodesize(stack)) + 1; 
    indexb = find_indexb(stack,pivot,ft_nodesize(stack)) + 1; 
    t_node *ptr;
    ptr = (*stack);
    int havemin1 = havemin(stack,pivot);
    if(indexa < indexb || indexa == indexb)
    {
        while(indexa != 0)
        {
            rchoose(stack,2);
            indexa--;
        }
    }else if(indexb < indexa)
    {
        while(indexb != 0)
        {
            rrchoose(stack,2);
            indexb--;
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
    int sizestack;
    int min;
    int max;
    sizestack = ft_nodesize(stacka) / 3;
    while(ft_nodesize(stacka) > sizestack)
    {
        pivot = givemepivot(stacka);
        if(havemin(stacka, pivot) == 0)
            break;
        while(ft_nodesize(stacka) > sizestack && ft_nodesize(stacka) > 1 && havemin(stacka,pivot) == 1)
        {
        findindex(stacka,pivot);
        pchoose(stacka,stackb,1);
        }
    }
    while(ft_nodesize(stacka) != 0)
    {
        min = findminnum(stacka); 
        min = find_indexmin(stacka,min,ft_nodesize(stacka) + 1);
        if(min > ft_nodesize(stacka) + 1 )
        {
            min = ft_nodesize(stacka) + 1 - min;
            while(min != 0)
            {
                rrchoose(stacka,2);
                min--;
            }
        } else
        {
            while(min != 0)
            {
                rchoose(stacka,2);
                min--;
            }
        }  
        pchoose(stacka,stackb,1);    
    }
    while(ft_nodesize(stackb) != 0)
    {
        max = findmax(stackb);
        max = find_indexmin(stackb,max,ft_nodesize(stackb) + 1);
        if(max > ft_nodesize(stackb) + 1 )
        {
            max = ft_nodesize(stackb) + 1 - max;
            while(min != 0)
            {
                rrchoose(stackb,1);
                max--;
            }
        } else
        {
            while(max != 0)
            {
                rchoose(stackb,1);
                max--;
            }
        }  
      pchoose(stackb,stacka,2);  
    }

}
