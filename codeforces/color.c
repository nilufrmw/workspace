#include <stdio.h>

void test_case(void) {
  int n;
  scanf("%d", &n);
  char row1[n+1], row2[n+1];
  scanf("%s", row1);
  scanf("%s", row2);
  for(int i = 0; i < n; ++i) {
    if(row1[i] == 'G') {
      row1[i] = 'B';
    }
    if(row2[i] == 'G') {
      row2[i] = 'B';
    }
  }
  int same = 1;
  for(int i = 0; i < n; ++i) {
    if(row1[i] != row2[i]) {
      same = 0;
    }
  }
  puts(same ? "Yes" : "No");
}

int main(void) {
  int T;
  scanf("%d", &T);
  while(T--) {
    test_case();
  }
  return 0;
}