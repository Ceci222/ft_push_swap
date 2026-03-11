NAME = push_swap

# Libft
LIBFT_PATH = libft/
LIBFT_NAME = libft.a
LIBFT = $(LIBFT_PATH)$(LIBFT_NAME)

# Ft_printf
FT_PRINTF_PATH = ft_printf/
FT_PRINTF_NAME = libftprintf.a
FT_PRINTF = $(FT_PRINTF_PATH)$(FT_PRINTF_NAME)

INCL = -I./libft -I./ft_printf
LINK = -L./libft -L./ft_printf
LIBS = -lft -lftprintf

DIR = srcs/

SRCS = push_swap.c push_swap_utils.c ft_errors_frees.c ft_stacks_nodes.c ps_parser.c push.c \
swap.c rotate.c reverse_rotate.c sort_two.c sort_three.c sort_four.c
OBJS = $(SRCS:.c=.o)

CC = cc
CFLAGS = -Werror -Wextra -Wall

all: $(NAME)

$(NAME): $(LIBFT) $(FT_PRINTF) $(OBJS) 
	$(CC) $(CFLAGS) $(OBJS) $(INCL) $(LINK) $(LIBS) -o $(NAME)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

$(LIBFT):
	make -sC $(LIBFT_PATH)

$(FT_PRINTF):
	make -sC $(FT_PRINTF_PATH)

clean:
	rm -f $(OBJS)
	$(MAKE) -C $(LIBFT_PATH) clean
	$(MAKE) -C $(FT_PRINTF_PATH) clean

fclean:
	rm -f $(OBJS) $(NAME)
	$(MAKE) -C $(LIBFT_PATH) fclean
	$(MAKE) -C $(FT_PRINTF_PATH) fclean

re: fclean all

.PHONY: clean fclean re all


