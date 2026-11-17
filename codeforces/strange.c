#include <stdio.h>

void test_case(void) {
  int n;
  scanf("%d", &n);
  int answer = n + 2 * ((n / 2) + (n / 3));
  printf("%d\n", answer);
}

int main(void) {
  int T;
  scanf("%d", &T);
  while(T--) {
    test_case();
  }
  return 0;
}