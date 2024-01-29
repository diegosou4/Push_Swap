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
    int i;
    i = 0;
    int max;
    sizestack = ft_nodesize(stacka) / 2;
    pivot = givemepivot(stacka);
    while(ft_nodesize(stacka) != sizestack)
    {
       if((*stacka)->num > pivot && i == 1)
        {
            pchoose(stacka,stackb,1);
            rchoose(stackb,1);
        }else
        {
            pchoose(stacka,stackb,1);
            i = 1;
        }
    }
    i = 0;
    int numero = findminnum(stackb);
    while(find_last(*(stackb))->num > numero)
    {
        rrchoose(stackb,1);
    }
    numero = findmax(stackb);
    while(ft_nodesize(stacka) != 0)
    {
       if((*stacka)->num < numero && i == 1)
        {
            pchoose(stacka,stackb,1);
            rchoose(stackb,1);
        }else
        {
            pchoose(stacka,stackb,1);
            i = 1;
            numero = findmax(stackb);
        }
      
    }
    while(ft_nodesize(stackb) != 0)
    {
        int nummax;
        nummax = findmax(stackb);
        max = find_indexmin(stackb,nummax,ft_nodesize(stackb) + 1);
        if(max > ((ft_nodesize(stackb) + 1) / 2))
        {
            while((*stackb)->num != nummax)
                rrchoose(stackb,1);
        } else
        {
            while((*stackb)->num != nummax)
                rchoose(stackb,1);
        }  
      pchoose(stackb,stacka,2);  
    }

}
