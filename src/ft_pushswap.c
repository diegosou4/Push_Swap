

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
}


void case5(t_node **stacka,t_node **stackb)
{
    int firstb;
    int secondb;
    t_node *index;
    int i;
    i = 0;
    int num;
    pchoose(stacka,stackb, 1);
    pchoose(stacka,stackb, 1);
    firstb = (*stackb)->num;
    secondb = (*stackb)->next->num;
    if(firstb > secondb)
        schoose(stackb,1);
    case3(stacka);
    while(i != 2)
    {
        firstb = (*stackb)->num;
        index = (*stacka);
        while(index)
        {
            if(firstb > index->num)
                break;
        num++;
        }
        
    i++;
    }
}
