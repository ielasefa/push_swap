 #ifndef PUSH_SWAP
#define PUSH_SWAP

#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <ctype.h>
#include <limits.h>  

 int	ft_isdigit(int c);
 int check_number(char **input);
int check_error(char **numbers);
int check_input(int ac, char **av);
char *ft_strjoin(char *s1, char *s2);
char **ft_split(char const *s, char c);
int check_max(char **input);
long	ft_atoi(const char *str);

#endif
