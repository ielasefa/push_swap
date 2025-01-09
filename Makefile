NAME = push_swap
SRC = cheak_error.c  main.c  utul_push_swap.c
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