#include <stdio.h>
/* strstrの自作関数その② （参考：https://git.42l.fr/serb/PISCINE/src/branch/master/C03/ex04/ft_strstr.c） */

char *ft_strstr(char *str, char *to_find)
{
    if (*to_find == '\0')
        return (NULL);
    while (*str != '\0')
    {
        if (*str == *to_find)
        {
            while (*str == *to_find)
            {
                to_find++;
            }
            return (str);
        }
        str++;
    }
    return (NULL);
}

int main()
{
    char str1[20] = "abc_def_ghi_jkl";
    char str2[] = "i_";
    char *tmp1, *tmp2;

    printf("_WHEN FIND[i_]_: ");
    printf("%s\n", ft_strstr(str1, str2));

    printf("_WHEN FIND[_d]_: ");
    tmp1 = ft_strstr(str1, "_d");
    printf("%s\n", tmp1);

    printf("_WHEN FIND[_d]_: ");
    tmp2 = ft_strstr(str1, "str");
    printf("%s\n", tmp2);

    return (0);
}