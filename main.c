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
  insert_element(new_array, 0, 7);
  print_array(new_array);
  printf("\n");
  remove_element(new_array, 0, 7);
  print_array(new_array);
  printf("\n");
  update_array(new_array, 10, 9);
  print_array(new_array);
  printf("\n");
  sort_asc_array(new_array);
  print_array(new_array);
  printf("\n");
  sort_desc_array(new_array);
  print_array(new_array);
  printf("\n");


  printf("Hello World\n");
  return 0;
}