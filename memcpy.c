/* 
Implement memcpy — copy n bytes from src to dest and return dest. 

Assumptions (classic interview contract): regions do not overlap.
If they might overlap, use memmove.

Do not call the standard library memcpy
*/


void *memcpy(void *dest, void *src, size_t n) {
  uint8_t *s = (uint8_t *) src;
  uint8_t *d = (uint8_t *) dest;
  void *start = d;
  for(size_t i = 0; i < n; ++i) {
    *d++ = *s++;
  }
  return start;
}