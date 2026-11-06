/*
definition for singly-linked list:
 struct node {
   int value;
   struct node *next;
 };
*/

void add_node(int value, struct node *node) {

}

struct node *solve(struct node *head) {
  struct node blue, yellow;
  int pos = 1;
  struct node cur = head;
  
  while(cur != NULL) {
    if(pos % 2 == 1) {
      add_node(cur->value, blue);
    }
    else {
      add_node(cur->value, yellow);
    }
    pos++;
    cur = cur->next;
  }
  
  blue->next = yellow->next;
  return blue_head;
}