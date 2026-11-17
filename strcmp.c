int my_strcmp(const char *a, const char *b) {
  while((*a == *b) && (*a != '\0' || *b != '\0')) {
    a++; b++;
  }
  return (unsigned char*) *a - (unsigned char*) b;
}