NAME = push_swap
BNAME = checker

SRC = addnode.c cheak_min_value.c push.c rotate.c sort_6_number.c \
    utul_push_swap.c cheak_error.c main.c reverse_rotate.c \
	sort_2_number.c swap.c array_sorted.c print_stack.c free.c

BSRC = addnode.c	comper.c	main_bonus.c	swap_bonus.c  array_sorted.c \
    free.c    reverse_rotate_bonus.c	sort_2_number.c	cheak_error.c \
	get_next_line.c  	print_stack.c	sort_6_number.c	utul_push_swap.c \
	cheak_min_value.c  get_next_line_utils.c  push_bonus.c	rotate_bonus.c  \
	sorted.c


CC = cc
CFLAGS = -Wall -Wextra -Werror
RM = rm -f

OBJ = $(SRC:.c=.o)
BOBJ = $(BSRC:.c=.o)

all: $(NAME)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

bonus: $(BOBJ)
	$(CC) $(CFLAGS) $(BOBJ) -o $(BNAME)

clean:
	$(RM) $(OBJ) $(BOBJ)

fclean: clean
	$(RM) $(NAME) $(BNAME)

re: fclean all

.PHONY:  clean
