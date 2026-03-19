#include "push_swap.h"

void sort_adaptive(t_stack *stack_a, t_stack *stack_b, t_counter *counter, float disorder)
{
    if (disorder < 0.2)
        sort_simple(stack_a, stack_b, counter);
    else if (disorder < 0.5)
        sort_chunks(stack_a, stack_b, counter);
    else
        sort_turk(stack_a, stack_b, counter);
}
/*
disorder < 0.2 → O(n) — bajo desorden
0.2 ≤ disorder < 0.5 → O(n√n) — desorden medio
disorder ≥ 0.5 → O(n log n) — alto desorden
*/