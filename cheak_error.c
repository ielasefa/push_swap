#include "push_swap.h"

int check_nambre(char **input)
{
    if (!input)
        return 1;
    int i = 0;
    while (input[i])
    {
        int j = 0;
        while (input[i][j])
        {
            if (!ft_isdigit(input[i][j]) && 
                !(j == 0 && (input[i][j] == '-' || input[i][j] == '+')))
                return 1;
            j++;
        }
        i++;
    }
    return 0;
}

int check_dable(char **input)
{
    if (!input)
        return 1;
    int i = 0;
    while (input[i])
    {
        int k = i + 1;
        while (input[k])
        {
            if(atoi(input[i]) == atoi(input[k]))
                return 1;
            k++;
        }
        i++;
    }
    return 0;
}

int check_error(char **numbers)
{
    if (!numbers)
        exit (1);

    if (check_nambre(numbers) ||check_dable(numbers) 
            ||check_max(numbers) || check_espace(numbers))
    {
        write(2, "Error\n", 6);
        exit(1);
    }
    exit (0);
}

int check_input(int ac, char **av)
{
	int result;
    char *input;
    char **number;
    
    input = strdup(av[1]);
    if (!input)
        return 1;

    int i = 2;
    while (i < ac)
    {
        char *tmp = ft_strjoin(input, av[i]);
        if (!tmp)
        {
            free(input);
            return 1;
        }
        free(input);
        input = tmp;
        i++;
    }
    number = ft_split(input, ' ');
    if (!number)
    {
        free(input);
        return 1;
    }
	result = check_error(number);
    return result;
}

int check_max(char **input)
{
    int i ;
    long num;

    i = 0;
    while (input[i])  
    {
        num = ft_atoi(input[i]);
        if (num > INT_MAX || num < INT_MIN)
                return (1); 
        i++;
    }
    return (0);
}
int check_espace(char **input)
{
    int i;
    int j;

    i = 0;
  while (input[i])
    {
        j = 0;
        while (input[i][j])
        {
            if (input[i][j] != ' ')
                return 0;
            j++;
        }
        i++;
    }
    return 1;
}
