#include <stdio.h>
int func(int n) {
  if (n == 1) return 0;
  printf("%d ", n);
  func(n - 1);
}
int main() {
  int n;
  scanf("%d", &n);
  func(n);
  printf("1");
  return 0;
}