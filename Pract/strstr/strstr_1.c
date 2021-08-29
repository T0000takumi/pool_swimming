#include <stdio.h>
/* strstrの自作関数その① （参考：http://manabu.quu.cc/up/3/e35057m1.htm） */

char *ft_strstr(char *s, char *cp)
{
    char *s1, *s2;

    /* cp　の文字列長が0なら s を返す */ 
    if( *cp == '\0')
        return (s);
    while( *s != '\0')
    {
        /* 終端でなく、また、文字が見つからない間、繰り返す　*/
        while(*s != '\0' && *s != *cp)
        {
            s++;
        }
        /* 見つからない */
        if(*s == '\0')
            return (NULL);
        s1 = s;
        s2 = cp;
        /* s1とcpの部分文字列が一致するか */
        while ( *s1 == *s2 && *s1 != '\0')
        {
            s1++;
            s2++;
        }
        /* cp の文字列は、全て一致した */
        if( *s2 == '\0')
        {
            return (s);
        }
        /* 次の位置から、調べ直す */
        s++;
    }
    return (NULL);/* 見つからない */
}

int main()
{
    char str1[20] = "abc_def_ghi_jkl";
    char str2[20] = "i_";
    char *tmp;

    printf("_WHEN FIND[i_]_: ");
    printf("%s\n", ft_strstr(str1, str2));

    printf("_WHEN FIND[_d]_: ");
    tmp = ft_strstr(str1, "_d");
    printf("%s\n", tmp);

    return (0);
}