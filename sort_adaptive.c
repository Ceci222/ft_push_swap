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
/*
disorder < 0.2 → O(n) — bajo desorden
0.2 ≤ disorder < 0.5 → O(n√n) — desorden medio
disorder ≥ 0.5 → O(n log n) — alto desorden
 */