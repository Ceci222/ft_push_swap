#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdarg.h>
# include <stdio.h>
# include "libft/libft.h"

typedef struct s_node
{
	long			content;
	//int				index;
	struct s_node	*prev;
	struct s_node	*next;
}				t_node;

typedef struct s_stack
{
	t_node	*top;
	t_node	*bottom;
	int		size;
}				t_stack;

void 	push_swap(int argc, char **argv);
char	**ft_parser(int argc, char **argv);
int		is_right_number(char *str);
void	ft_print_stack(t_node *stack);
void	ft_error(void);
void	ft_free_lst(t_node *stack_a);
void	ft_free_char(char **data_parsed);
void 	ft_check(char **arg);
int		is_duplicate(t_node *stack_a, long num);
int		ft_strcmp(const char *s1, const char *s2);
void	ft_lstadd_back(t_node **lst, t_node *new);
void	ft_lstadd_front(t_node **lst, t_node *new);
void	ft_lstclear(t_node **lst, void (*del)(void *));
void	ft_lstdelone(t_node *lst, void (*del)(void *));
void	ft_lstiter(t_node *lst, void (*f)(void *));
t_node	*ft_lstlast(t_node *lst);
t_node	*ft_lstmap(t_node *lst, void *(*f)(void *), void (*del)(void *));
t_node	*ft_lstnew(long content);
int		ft_lstsize(t_node *lst);

#endif