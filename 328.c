/*
definition for singly-linked list:
 struct node {
   int value;
   struct node *next;
 };
*/

struct node *solve(struct node *head) {
  struct node blue, yellow;
  int pos = 1;
  int cur = head;
  while(cur != NULL) {
    if(pos % 2 == 1) {
      add_node(cur, blue);
    }
    else {
      add_node(cur, yellow);
    }
    pos++;
    cur = cur->next;
  }
}