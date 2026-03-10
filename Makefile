NAME = push_swap

# Libft
LIBFT_PATH = libft/
LIBFT_NAME = libft.a
LIBFT = $(LIBFT_PATH)$(LIBFT_NAME)

INCL = -I./libft
LINK = -L./libft
LIBS = -lft

DIR = srcs/

SRCS = push_swap.c push_swap_utils.c ft_errors_frees.c ft_stacks_nodes.c ps_parser.c pa.c pb.c sa.c
OBJS = $(SRCS:.c=.o)

CC = cc
CFLAGS = -Werror -Wextra -Wall

all: $(NAME)

$(NAME): $(LIBFT) $(OBJS) 
	$(CC) $(CFLAGS) $(OBJS) $(INCL) $(LINK) $(LIBS) -o $(NAME)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

$(LIBFT):
	make -sC $(LIBFT_PATH)

clean:
	rm -f $(OBJS)
	$(MAKE) -C $(LIBFT_PATH) clean

fclean:
	rm -f $(OBJS) $(NAME)
	$(MAKE) -C $(LIBFT_PATH) fclean

re: fclean all

.PHONY: clean fclean re all


