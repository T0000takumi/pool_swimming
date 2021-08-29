#include<limits.h>
#include<stdio.h>

/*
    Create a function that display al digits, 
    in a single line, by ascending order.
*/

int main(void)
{
    int x, max, min;
    max = INT_MAX;
    min = INT_MIN;
    
    printf("\n");

    for(x = min; x <= max; x++){
        printf("%d,", x);
        if(x % 10 == 0)
            printf("\n");
        if(x == max)
            printf("%d", x);
    }

    printf("\n\n");

    return  0;
}
