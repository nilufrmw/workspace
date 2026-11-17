int my_strcmp(const char *a, const char *b) {
  while(*a != '\0' || *b != '\0') {
    a++; b++;
  }
  if(*a == '\0' && *b == '\0') return 0;
  else if(*a < *b) return -1;
  else return 1;
}