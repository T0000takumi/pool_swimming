#include <stdio.h>

int main (int argc, const char *argv[])
{

    char target[20] = "count";
    int len;

    len = (int )strlen (target);  // 【キャスト】ここで「charからintに型を変えていますよ」と宣言

    /*
        【Warning】
        Implicit conversion loses integer precision:
        'size_t'(aka 'unsigned long') to 'int'
        → 単純に、(int )を加えて宣言しておくだけでOK
    */

    printf ("length of the word %s is %d\n", target, len);

    return 0;
}