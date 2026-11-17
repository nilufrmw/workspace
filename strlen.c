size_t my_strlen(const char *s) {
  size_t length = 0;
  char *p = s;
  while(*p != '\0') {
    length++;
    p++;
  }
  return length;
}