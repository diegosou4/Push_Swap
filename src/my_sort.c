



#include "../push_swap.h"


int my_sort(t_node **stacka, t_node **stackb)
{
    t_node *p;
    p = (*stacka);
    while(p)
    {   
        push(stackb,stacka);
        p = (*stacka);
        
    }
    return 0;
}