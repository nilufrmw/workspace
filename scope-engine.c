#include <stdio.h>
#include <string.h>

char *preprocess(const char *source);

typedef struct {
  char id[64];
  int child_count;
} Scope;

void parse(char *source) {
  char *clean = preprocess(source);
  /*
  simple fixed stack on the local CPU workspace. 64 levels of nesting is virtually impossible to exceed in real code
  */
  
  Scope stack[64];
  int stack_size = 0;

  for(int i = 0; clean[i] != '\0'; i++) {
    if(clean[i] == '{') {
      char current_id[64];
      if(stack_size == 0) {
        strcpy(current_id, "1");
      } 
      else {
        // tell parent they have a new child
        stack[stack_size - 1].child_count++;
        snprintf(current_id, sizeof(current_id),  
                 "%s.%d", stack[stack_size - 1].id, stack[stack_size - 1].child_count);
      }

      // report the scope ID right away
      printf("%s ", current_id);

      // push onto our local fixed stack
      if(stack_size < 64) {
        strcpy(stack[stack_size].id, current_id);
        stack[stack_size].child_count = 0;
        stack_size++;
      }
    } 
    else if (clean[i] == '}') {
      if(stack_size > 0) {
        stack_size--; // pop
      }
    }
  }
  printf("\n");
}
