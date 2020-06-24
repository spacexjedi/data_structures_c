#include <stdio.h>
#include "array.h"

int main(void) {
  Array* new_array = create_array();
  init_array(new_array, 3, 10);
  print_array(new_array);
  printf("\n");
  push_array(new_array, 5);
  print_array(new_array);
  printf("\n");


  printf("Hello World\n");
  return 0;
}