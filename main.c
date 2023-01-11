#include <stdio.h>

void staircase(int n) {
  for (int i = 0; i <= n; i++) {
    for (int j = 0; j < i; j++) {
      printf("%d", i);
    }
    printf("\n");
  }
  for (int i = n - 1; i > 0; i--) {
    for (int j = 0; j < i; j++) {
      printf("%d", i);
    }
    printf("\n");
  }
}

void pyramid(int n) {
  int halfway = (n / 2) + 1;

  for (int i = 0; i < halfway + 1; i++) {
    int num = i;
    for (int j = 0; j < i; j++) {
      printf("%3d", num);
      num++;
    }
    printf("\n");
  }
  for (int i = halfway - 1; i > 0; i--){
    int num = i;
    for (int j = 0; j < i; j++){
      printf("%3d", num);
      num++;
    }
    printf("\n");
  }
}

int main(void) {
  int n = 5;
  staircase(n);

  n = 2;
  staircase(n);

  n = 7;
  pyramid(n);

  return 0;
}