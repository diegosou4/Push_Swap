

#include "../push_swap.h"


void    push_swap(t_node **stacka,t_node **stackb)
{
   // swap(stacka);
    push(stacka, stackb);

}

void case3(t_node **stacka)
{
    int last;
    int middle;
    int first;

    first = (*stacka)->num;
    middle = (*stacka)->next->num;
    last = (*stacka)->next->next->num;
    
    if(middle > first && middle > last && first > last)
        rrchoose(stacka,2);
    else if(first < middle && first > last && middle > last)
        rchoose(stacka,2);
    else if(first > middle && first < last)
        schoose(stacka,2);
    else if(first > middle && first > last && middle > last)
    {
        schoose(stacka,2);
        rrchoose(stacka,2);
    }
    else if(first > middle && first > last && middle < last)
        rchoose(stacka,2);
    else if(first > middle)
        schoose(stacka,2);
    else if(middle > last && last > first)
    {
        schoose(stacka,2);
        rchoose(stacka,2);
    }
}

int find_min(t_node **stacka, int nodesize)
{
    int min;
    int index;
    int i;
    i = 0;
    t_node *ptr ;
    ptr = *stacka;

    min = ptr->num;
    index = 0;

    while (i < nodesize)
    {
        if (ptr->num < min)
        {
            min = ptr->num;
            index = i;
        }
        ptr = ptr->next;
        i++;
    }

    return index;
}


void case5(t_node **stacka,t_node **stackb)
{
    int min;

    min = find_min(stacka,5);
    if(min == 0)
        pchoose(stackb,stacka,1);
    if(min == 1)
    {
        schoose(stacka,2);
        pchoose(stacka,stackb,1);
    }
    if(min == 2)
    {
        rchoose(stacka,2);
        schoose(stacka,2);
        pchoose(stacka,stackb,1);
    }
    if(min == 3)
    {
        rrchoose(stacka,2);
        rrchoose(stacka,2);
        pchoose(stacka,stackb,1);
    }
    if(min == 4)
    {
        rrchoose(stacka,2);
        pchoose(stacka,stackb,1);
    }
    min = find_min(stacka,4);
    if(min == 0)
        pchoose(stacka,stackb,1);
    if(min == 1)
    {
        schoose(stacka,2);
        pchoose(stacka,stackb,1);
    }
    if(min == 2)
    {
        rchoose(stacka,2);
        schoose(stacka,2);
        pchoose(stacka,stackb,1);
    }
    if(min == 3)
    {
        rrchoose(stacka,2);
        pchoose(stacka,stackb,1);
    }
        case3(stacka);
    pchoose(stackb,stacka,2);
    pchoose(stackb,stacka,2);

}
