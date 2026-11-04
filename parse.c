#include <stdio.h>

// how should be the IDs stored?
char *ids[100];

/*
remove every non braces and comments
*/
void preprocess(char *source) {
  char tmp[100];
  char *ptr = source;
  char *t = tmp;
  int cnt = 0;

  while(*ptr != '\0') {
    if(*ptr == '/') {
      ptr++;
      while(*ptr != '/') {
        ptr++;
      }
    }
    if(*ptr == '{' || *ptr == '}') {
      *t++ = *ptr;
      cnt++;
    }
  }

  printf("%s\n", tmp);
}

void parse(char *source) {
  preprocess(source);
  // todo
}

int main(void) {
  char source[100];
  scanf("%s", source);
  
  parse(source);

  return 0;
}