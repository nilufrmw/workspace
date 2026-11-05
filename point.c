void move(point *p) {
  *(p).x++;
  *(p).y++;
}

// same as above
void move(point *p) {
  p->x++;
  p->y++;
}