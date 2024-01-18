



#include "../push_swap.h"


int high_number(t_node **stacka)
{
    t_node *ptr;
    t_node *p;

    ptr = (*stacka);

    while(ptr)
    {
        p = ptr->next;
        while(p && ptr->num > p->num)
            p = p->next;
        if(p == NULL)
        {
            return(1);
        }
        ptr = ptr->next;
    }
    return(0);
}

int last_number(t_node **stacka)
{
    t_node *ptr;
    t_node *last;
    ptr = (*stacka);
    last = (*stacka);

    while(last->next)
    {
        last = last->next;
    }
    if(last->num > ptr->num)
    {
        return(1);
    }
    return(0);

}
int my_sort(t_node **stacka, t_node **stackb)
{
    t_node *p;
    p = (*stacka);
    while(p)
    {   
        if(last_number(stacka) == 1)
        {
            rotate(stacka);
            p = (*stacka);
        }else if(high_number(stacka) == 1)
        {
            push(stackb,stacka);
            p = (*stacka);
        }
    }
    return 0;
}