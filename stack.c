int stack[100];
int top = -1; // empty

void push(int x) {
  top++;
  stack[top] = x;
}

void pop(void) {
  top--;
}

int peek(void) {
  return stack[top];
}