void print(uint32_t *start, uint8_t size) {
  for(int i = 0; i < size; ++i) {
    printf("%d\n", *(start + i));
  }
}