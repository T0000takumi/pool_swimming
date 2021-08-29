#include<stdio.h>

void outstring(void *);

int main(){
    int i = 65;
    double d = 10.101;

    outstring(&i);
    outstring(&d);
    outstring("What the fuck is this!");

    return 0;
}

void outstring(void *txt){
    char *a = (char *)txt;

    printf("%s\n", a);
}

/*
    汎用ポインタ【void*】
*/