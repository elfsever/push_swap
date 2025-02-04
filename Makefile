NAME = push_swap

SRCS = 	push_swap.c \
		actions1.c \
		actions2.c \
		actions3.c  \
		actions4.c  \
		utils/argv_control.c \
		utils/sort_control.c \
		utils/stack.c \
		utils/functions.c \
		utils/functions1.c \
		utils/functions_list.c \
		sort.c \

CFLAGS = -Wall -Wextra -Werror

OBJS = $(SRCS:.c=.o)

all: $(NAME)
$(NAME): $(OBJS)
	gcc $(CFLAGS) $(OBJS) -o $(NAME)

clean: 
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re