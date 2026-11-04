#include <stdio.h>

char *ids[100];
char tmp[100];

/*
remove every non braces and comments
*/
void preprocess(char *source) {
  char *ptr = source;
  char *t = tmp;

  while(*ptr != '\0') {
    if(*ptr == '/') {
      ptr++;
      while(*ptr != '/') {
        ptr++;
      }
    }
    if(*ptr == '{' || *ptr == '}') {
      *t++ = *ptr++;
    }
    else {
      ptr++;
    }
  }
}

void parse(char *source) {
  preprocess(source);
  printf("%s\n", tmp);
}

int main(void) {
  char source[100];
  scanf("%99[^\n]", source);

  parse(source);

  return 0;
}