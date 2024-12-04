#include<stdio.h>
int main(){

  int a[10] = {1,2,3,4,5,6,7,8,9,10};
  int b[10] = {10,9,8,7,6,5,4,3,2,1};
  int c[10];

  for (int i = 0; i < 10; i++) {
    c[i] = a[i] + b[i];
    printf("%d ", c[i]);
  }

  return 0;
}
