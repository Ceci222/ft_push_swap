#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
//Once it finds STRATEGY_SIMPLE in the code it replaces it with "Simple / O(n^2)"
# define STRATEGY_SIMPLE "Simple / O(n^2)"
# define STRATEGY_MEDIUM "Medium / O(n*sqrt(n))"
# define STRATEGY_COMPLEX "Complex / O(n log n)"
# define STRATEGY_ADAPTIVE "Adaptive"

# include <unistd.h>
# include <stdarg.h>
# include <stdio.h>
# include "libft/libft.h"
# include "ft_printf/ft_printf.h"

typedef struct s_node
{
	long			content;
	struct s_node	*prev;
	struct s_node	*next;
	struct s_node	*target;

}					t_node;

typedef struct s_stack
{
	int		size;
	t_node	*top;
	t_node	*bottom;
}			t_stack;

typedef struct s_counter
{
	int	pa;
	int	pb;
	int	sa;
	int	sb;
	int	ss;
	int	ra;
	int	rb;
	int	rr;
	int	rra;
	int	rrb;
	int	rrr;
	int	total;
}			t_counter;

void	pb(t_stack *a, t_stack *b, t_counter *counter);
void	pa(t_stack *a, t_stack *b, t_counter *counter);
void	ft_error(void);
void	ft_free_char(char **data_parsed);
void	push_swap(int argc, char **argv);
void	ft_lstadd_back(t_node **lst, t_node *new);
void	ft_lstadd_front(t_node **lst, t_node *new);
void	ft_lstclear(t_node **lst, void (*del)(void *));
void	ft_lstdelone(t_node *lst, void (*del)(void *));
void	ft_lstiter(t_node *lst, void (*f)(void *));
void	ft_free_stack(t_stack *stack);
void	ft_node_to_bottom(t_stack *stack, long value);
void	free_stack_and_char(t_stack *stack_a, t_stack *stack_b, char **data);
void	swap_one(t_stack *stack);
void	sa(t_stack *a, t_counter *counter);
void	sb(t_stack *b, t_counter *counter);
void	ss(t_stack *a, t_stack *b, t_counter *counter);
void	rotate(t_stack *stack);
void	ra(t_stack *a, t_counter *counter);
void	rb(t_stack *b, t_counter *counter);
void	rr(t_stack *a, t_stack *b, t_counter *counter);
void	reverse_rotate(t_stack *stack);
void	rra(t_stack *a, t_counter *counter);
void	rrb(t_stack *b, t_counter *counter);
void	rrr(t_stack *a, t_stack *b, t_counter *counter);
void	sort_two(t_stack *stack, t_counter *counter);
void	sort_three(t_stack *stack, t_counter *counter);
void	sort_four(t_stack *stack_a, t_stack *stack_b, t_counter *counter);
void	sort_five(t_stack *stack_a, t_stack *stack_b, t_counter *counter);
void	ft_init_counter(t_counter *counter);
void	sort_simple(t_stack *stack_a, t_stack *stack_b, t_counter *counter);
void	final_order_and_push(t_stack *stack_a, t_stack *stack_b, t_counter *counter);
void	ft_print_benchmark(t_counter *counter, double disorder, char *strategy);
void	sort_chunks(t_stack *stack_a, t_stack *stack_b, t_counter *counter);
void	sort_adaptive(t_stack *a, t_stack *b, t_counter *counter, float dis);
int		is_right_number(char *str);
int		is_duplicate(t_stack *stack, long num);
int		ft_strcmp(const char *s1, const char *s2);
int		ft_lstsize(t_node *lst);
int		find_min_pos(t_stack *stack_a);
int		find_min_num(t_stack *stack_a);
int		find_max_num(t_stack *stack_a);
int		is_ordered(t_stack *stack_a);
char	**ft_parser(int argc, char **argv, int i);
t_node 	*find_target_in_b(t_stack *stack_b, int value);
t_node	*find_cheapest(t_stack *stack_a, t_stack *stack_b);
t_node	*ft_lstlast(t_node *lst);
t_node	*ft_lstmap(t_node *lst, void *(*f)(void *), void (*del)(void *));
t_node	*ft_create_node(long content);
t_stack	*ft_fill_stack(char **arg);
t_stack	*ft_create_stack(void);
double	ft_compute_disorder(t_stack *stack_a);
void	sort_turk(t_stack *stack_a, t_stack *stack_b, t_counter *counter);
void	ft_r_or_rr_moves(t_stack *stack_a, t_stack *stack_b, t_node *node,t_counter *counter);
t_node	*find_min_node(t_stack *stack);
t_node	*find_max_node(t_stack *stack_b);

#endif