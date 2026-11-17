/* 
Implement memcpy — copy n bytes from src to dest and return dest. 

Assumptions (classic interview contract): regions do not overlap.
If they might overlap, use memmove.

Do not call the standard library memcpy
*/


void *memcpy(void *src, void *dest, size_t n) {
  uint_8 *s = (uin8_t *) s;
  uint_8 *d = (uin8_t *) d;
  void *start = d;
  for(size_t i = 0; i < n; ++i) {
    *d++ = *s++;
  }
  return start;
}