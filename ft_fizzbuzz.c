#include <unistd.h>
void put_char(char c)
{
    write(1, &c, 1);
}
void ft_putnb(int nb)
{
    if(nb >= 0 && nb <= 9)
        put_char(nb + '0');
    if(nb >= 10)
    {
        ft_putnb(nb/10);
        ft_putnb(nb%10);
    }
}

int main()
{
    int ok = 1;
    while(ok <= 100)
    {
        if(ok % 3 == 0 && ok % 5 == 0)
            write(1, "Fizzbuzz", 8);
        else if(ok % 3 == 0)
            write(1, "Fizz", 4);
        else if(ok % 5 == 0)
            write(1, "Buzz", 4);
        else
            ft_putnb(ok);

        write(1, "\n", 1);
        ok++;

    }
}