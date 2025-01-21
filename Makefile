NAME = push_swap
SRC = addnode.c	cheak_min_value.c	push.c	rotate.c	sort_6_number.c \
	 utul_push_swap.c	cheak_error.c  main.c	reverse_rotate.c	\
	 sort_2_number.c  swap.c array_sorted.c  print_stack.c 			 
CC = cc
FLAG = -Wall-Wextra-Werror
RM = rm -f
OBJ = $(SRC:.c=.o)

all : $(NAME)
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@
$(NAME): $(OBJ) 
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)
clean:
	$(RM) $(OBJ)
fclean:	clean
	$(RM) $(NAME)
re: fclean all

.PHONY:clean
