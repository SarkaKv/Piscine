#include <stdio.h>

int ft_atoi(char *str)
{
    int delka = 0;
    int minus = 1;
    int nb = 0;

    while((str[delka] <= '\f' && str[delka] >= '\t') || str[delka] == ' ')
    {
        delka++;
    }
    if(str[delka] == '+' || str[delka] == '-')
    {
        if(str[delka] == '-')
            minus *= -1;
        delka++;
    }
    while(str[delka] >= '0' && str[delka] <= '9')
    {
        nb = 10 * nb;
        nb = nb + (str[delka] - '0');
        delka++;
    }
    nb *= minus;
    return(nb);

}
int main()
{

    printf("%d", ft_atoi("+123"));
}
