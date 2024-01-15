

#include "../push_swap.h"


int swap(t_node **stack)
{
    int temp;
    t_node *pnode;  

    if (*stack == NULL || (*stack)->next == NULL) {
        return (0); 
    }
    pnode = *stack;
    temp = pnode->num;
    pnode->num = pnode->next->num;
    pnode->next->num = temp;
    return (1);
}

int push(t_node **dest, t_node **src)
{
    int temp;
    t_node *node_to_push;

    node_to_push = *src;
    if(*src == NULL)
        return(0);
    *src = (*src)->next;
    if(*src)
        (*src)->previous = NULL;
    node_to_push->next = NULL;
    if(*dest  == NULL)
    {
        *dest = node_to_push;
        return(1);
    }else{
        node_to_push->next = *dest;
        node_to_push->next->previous = node_to_push;
        *dest = node_to_push;
        return(1);
    }
    return(1);
}
