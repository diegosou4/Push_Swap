

#include "../push_swap.h"


void swap(t_node **stack)
{
    int temp;
    t_node *pnode;  

    if (*stack == NULL || (*stack)->next == NULL) {
        return; 
    }
    pnode = *stack;
    temp = pnode->num;
    pnode->num = pnode->next->num;
    pnode->next->num = temp;
}
