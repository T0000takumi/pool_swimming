#include <unistd.h>

void ft_putstr(char *str)
{
    int tmp_var = 0;
    while(str[tmp_var] != 0)
    {
        write(1, &str[tmp_var], 1);
        ++tmp_var;
    }
}

int main()
{
    char ary[5] = "TEST";

    ft_putstr(ary);

    return 0;
}