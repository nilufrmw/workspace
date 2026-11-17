#include <stdio.h>

int cnt[256];

void test_case(void) {
  int n;
  scanf("%d", &n);
  char s[n];
  scanf("%s", s);
  if(n != 5) puts("NO");
  else {
    for(int i = 0; i < 256; ++i) {
      cnt[i] = 0;
    }
    for(int i = 0; i < n; ++i) {
      cnt[s[i]]++;
    }
    char *tmp = "Timur";
    int can = 1;
    for(int i = 0; i < 5; ++i) {
      if(cnt[tmp[i]] != 1) can = 0;
    }
    puts(can ? "YES" : "NO");
  }
}

int main(void) {
  int T;
  scanf("%d", &T);
  while(T--) {
    test_case();
  }
  return 0;
}