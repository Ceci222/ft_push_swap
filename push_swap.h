#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdarg.h>
# include <stdio.h>
# include "libft/libft.h"

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

void	ft_print_stack(t_stack *stack);
void	pb(t_stack *a, t_stack *b);
void	pa(t_stack *a, t_stack *b);
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
int		is_right_number(char *str);
int		is_duplicate(t_stack *stack, long num);
int		ft_lstsize(t_node *lst);
char	**ft_parser(int argc, char **argv);
t_node	*ft_lstlast(t_node *lst);
t_node	*ft_lstmap(t_node *lst, void *(*f)(void *), void (*del)(void *));
t_node	*ft_create_node(long content);
t_stack	*ft_fill_stack(char **arg);
t_stack	*ft_create_stack(void);

#endif