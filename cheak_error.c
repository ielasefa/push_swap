//#include "push_swap"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
//void ft_tcheak_input

char	*ft_strjoin(char *s1, char *s2)
{
	char	*dst;

	int i, (j);
	if (!s1)
		return (strdup(s2));
	if (!s2)
		return (strdup(s1));
	if (!s1 && !s2)
		return (NULL);
	dst = malloc(((strlen(s1) + strlen(s2)) + 2));
	if (!dst)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		dst[i] = s1[i];
		i++;
	}
	j = 0;
    dst[i++] = ' ';
	while (s2[j])

		dst[i++] = s2[j++];
    dst[i] = ' ';
	dst[i +1] = '\0';
	return (dst);
}
int main( int ac , char **av)
{
    char  *input;
    int i = 1;

    if(ac == 1)
        return (0);
    while ( i < ac)
    {
        char* tmp = ft_strjoin( input ,av[i]);
        input = tmp;
        i++;
    }
     ft_split(input, ' ');
    
    //ft_tcheak_error(input ,)   
}