#include <stdio.h>
#define NUMBER 100

int main(void)
{
  int i = 0;
  int j = 0;

  int array [NUMBER];
  int reverse [NUMBER];


  for(i = 0; i < NUMBER; i++){
    array[i] = i + 1;
  }

  for(i = 0, j = NUMBER; i < NUMBER; i++){
    reverse[j - 1] = array[i];
    j--;
  }

  printf("\n配列arrayを表示\n");
  for(i = 0; i < NUMBER; i++){
    printf("%3d", array[i]);
    if((i + 1) % 10 == 0){
      printf("\n");
    }
  }

  printf("\n配列reverseを表示\n");
  for(j = 0; j < NUMBER; j++){
    printf("%3d", reverse[j]);
    if((j + 1) % 10 == 0){
      printf("\n");
    }
  }

  return 0;
}
