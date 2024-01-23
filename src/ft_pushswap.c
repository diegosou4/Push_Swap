

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
    else if(first < middle)
        schoose(stacka,2);
}


void case5(t_node **stacka,t_node **stackb)
{
    int firsta;
    int firstb;
    int lasta;
    int lstsize;

    lstsize = ft_nodesize(stacka);
    pchoose(stacka,stackb, 1);
    pchoose(stacka,stackb, 1);
    case3(stacka);
    pchoose(stackb,stacka, 2);
    pchoose(stackb,stacka, 2);
    

}
