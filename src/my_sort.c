



#include "../push_swap.h"


int low_number(t_node **stacka)
{
    t_node *ptr;
    t_node *p;

    ptr = (*stacka);

    while(ptr)
    {
        p = ptr->next;
        while(p && ptr->num < p->num)
            p = p->next;
        if(p == NULL)
        {
            return(1);
        }else{
            return(0);
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
    int tamlst;

    tamlst = ft_nodesize(stacka);
    if(tamlst == 3)
    {
        while(is_sorted(stacka) == 0)
        {
            case3(stacka);
        }
    }
    if(is_sorted(stacka) == 1)
        return(1);
    p = (*stacka);
    while(p)
    {   
        if(low_number(stacka) == 1)
        {
            push(stackb,stacka);
            printf("pb\n");
            p = (*stacka);
        }else{
            rotate(stacka);
            printf("ra\n");
            p = (*stacka);
        }   
    }
    while ((*stackb))
    {
        push(stacka,stackb);
    }
    
    return 0;
}