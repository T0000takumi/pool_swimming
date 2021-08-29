#include <stdio.h>

int    ft_strlen(char *str)
{
    int count = 0;
    
    while (str[count] != 0)
    {
        ++count;
    }
    return (count);
}

int     main()
{
    char str[10] = "Hi";

    int i = ft_strlen(str);
    printf("\t文字数：%d\n", i);

    return 0;
}