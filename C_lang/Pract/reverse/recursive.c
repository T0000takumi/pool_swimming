#include<stdio.h>
#include<time.h>

void reverse(char *str){
    if(*str != '\0'){
        reverse(str + 1);
        printf("%c\n", *str);
    }
}

int main(){
    int time;
    long cpu_time;

    char ary[] = "abcdefghijklmnopqrstuvwxyz";
    reverse(ary);

    cpu_time = clock();
    printf("CPU時間: \t %ld \n", cpu_time);

    return 0;
}
