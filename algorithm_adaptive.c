#include "push_swap.h"

void	sort_adaptive(t_stack *a, t_stack *b, t_counter *counter, float dis)
{
	if (dis < 0.2)
		sort_simple(a, b, counter);
	else if (dis < 0.5)
		sort_chunks(a, b, counter);
	else
		sort_turk(a, b, counter);
}
