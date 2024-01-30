/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_quicksort.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diemorei <diemorei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 16:42:27 by diegmore          #+#    #+#             */
/*   Updated: 2024/01/29 21:06:48 by diemorei         ###   ########.fr       */
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


int sort_c(t_node **stackc, t_node **stackd)
{
    t_node *p;
    p = (*stackc);
    while(p)
    {   
        if(low_number(stackc) == 1)
        {
            push(stackd,stackc);
            p = (*stackc);
        }else{
            rotate(stackc);
            p = (*stackc);
        }   
    }
    while ((*stackd))
    {
        push(stackc,stackd);
    }
    
    return(1);
}
void tempsort(t_node **stacka,t_node **stackc)
{
    t_node *stackd;
    stackd = NULL;
    while(is_sorted(stackc) == 0)
    {
        sort_c(stackc,&stackd);
    }

}
int caselen(int len)
{
    int i;

    i = 0;
    if(len <= 80 )
        i = 2;
    else if(len <= 100)
        i = 4;
    else if(len <= 150)
        i = 6;
    else if(len <= 500)
        i = 8;
    else if(len <= 1000)
        i = 16;
    else if(len <= INT_MAX)
        i = 20;
    return(i);
}

t_node *stackpivot(t_node **stackc)
{
    int lencase;
    int len = caselen(ft_nodesize(stackc));
    lencase = ft_nodesize(stackc) / len;
    t_node *stackpiv = NULL;
    t_node *current = *stackc;
    int i = 0;
    int j = 0;

    while(current != NULL) 
    {   
        if(i == (lencase - 1 + j*lencase))
        {
            if(j == 0)
            {
                stackpiv = new_node(current->num);
            }
            else
            {
                add_back(&stackpiv, current->num);
            }
            j++;
        }
        current = current->next;
        i++;
    }
    return stackpiv;
}

void quicksort(t_node **stacka,t_node **stackb, t_node **stackc)
{

    tempsort(stacka,stackc);
    t_node *pivot;

    pivot = stackpivot(stackc);
    while(pivot != NULL )
    {
        int haveminn = havemin(stacka,pivot->num);
        while(havemin(stacka,pivot->num) == 1)
        {
        if((*stacka)->num <= pivot->num)
        {
            pchoose(stacka,stackb,1);
        }else 
        {
            rchoose(stacka,2);
        }
          int haveminn = havemin(stacka,pivot->num);
        }
        pivot = pivot->next;
    }
    while(ft_nodesize(stackb) != 0)
    {
        int max;
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


