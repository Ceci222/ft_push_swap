#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdarg.h>
# include <stdio.h>
# include "libft/libft.h"

typedef struct s_list
{
	long			content;
	int				index;
	struct s_list	*prev;
	struct s_list	*next;
}				t_list;

void 	push_swap(int argc, char **argv);
int		is_right_number(char *str);
void	ft_error(void);
void	ft_free(t_list *stack_a);
void 	ft_check(char **arg);
int		is_duplicate(t_list *stack_a, long num);
int		ft_strcmp(const char *s1, const char *s2);
void	ft_lstadd_back(t_list **lst, t_list *new);
void	ft_lstadd_front(t_list **lst, t_list *new);
void	ft_lstclear(t_list **lst, void (*del)(void *));
void	ft_lstdelone(t_list *lst, void (*del)(void *));
void	ft_lstiter(t_list *lst, void (*f)(void *));
t_list	*ft_lstlast(t_list *lst);
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));
t_list	*ft_lstnew(long content);
int		ft_lstsize(t_list *lst);


#endif