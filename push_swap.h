#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

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

void	ft_print_stack(t_stack *stack);
void	pb(t_stack *a, t_stack *b, t_counter *counter);
void	pa(t_stack *a, t_stack *b, t_counter *counter);
void	ft_error(void);
void	ft_free_stack(t_stack *stack);
void	ft_free_char(char **data_parsed);
void	push_swap(int argc, char **argv);
void	ft_lstadd_back(t_node **lst, t_node *new);
void	ft_lstadd_front(t_node **lst, t_node *new);
void	ft_lstclear(t_node **lst, void (*del)(void *));
void	ft_lstdelone(t_node *lst, void (*del)(void *));
void	ft_lstiter(t_node *lst, void (*f)(void *));
void	ft_free_stack(t_stack *stack);
void	ft_node_to_bottom(t_stack *stack, long value);
void	free_and_print(t_stack *stack_a, t_stack *stack_b, char **data);
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
int		is_right_number(char *str);
int		is_duplicate(t_stack *stack, long num);
int		ft_lstsize(t_node *lst);
char	**ft_parser(int argc, char **argv);
t_node	*ft_lstlast(t_node *lst);
t_node	*ft_lstmap(t_node *lst, void *(*f)(void *), void (*del)(void *));
t_node	*ft_create_node(long content);
t_stack	*ft_fill_stack(char **arg);
t_stack	*ft_create_stack(void);
double	ft_compute_disorder(t_stack *stack_a);

#endif