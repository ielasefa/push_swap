NAME = push_swap.a 
SRC = cheak_error.c  main.c  utul_push_swap.c
CC = cc
FLAG = -Wall-Wextra-Werror
RM = rm -f
OBJ = $(SRC:.c=.o)

all : $(NAME)
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@
$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)
clean:
	$(RM) $(OBJ)
fclean:	clean
	$(RM) $(NAME)
re: fclean all
