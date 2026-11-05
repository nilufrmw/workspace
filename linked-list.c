typedef struct node {
  int data;
  struct node *next;
};

int main(void) {
  node *head = (node *) malloc(sizeof(node));
  head->data = 10;
  head->next = NULL;
  return 0;
}