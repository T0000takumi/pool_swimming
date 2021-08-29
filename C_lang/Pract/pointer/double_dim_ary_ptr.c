#include<stdio.h>
#include<string.h>

int main(void){

    int i = 5;

    char *ary[5][10];
    char str[10] = "Buffalor";
    char ary_str[100];

    strcpy(&ary[0][0], "The_");
    strcpy(&ary[0][1], "animal_");
    printf("%s \n", *ary);

    sprintf(ary_str, "%s%s%d \n", ary, str, i);
    printf("%s", ary_str);

    return 0;
}

/*

    #include<stdio.h>

    int main(void)
    {
        int *p
        int i;

        p = &i;

        printf("p = %p\n",p);
        printf("&i = %p\n",&i);

        printf("p = %p\n",&p);
        printf("&i = %p\n",i);

        return 0;
    }

    → p = 0012FF80, &i = 0012FF80
    当然アドレスは同じになる。
*/
