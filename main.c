#include <stdio.h>
#include "array.h"

int main(void) {
  Array* new_array = create_array();
  print_array(new_array);
  printf("\n");
  push(new_array, 5);
  print_array(new_array);
  printf("\n");
  insert(new_array, 0, 7);
  print_array(new_array);
  printf("\n");
  pop(new_array);
  print_array(new_array);
  printf("\n");
  remove_elem(new_array, 0);
  print_array(new_array);
  printf("\n");
  update(new_array, 10, 9);
  print_array(new_array);
  printf("\n");
  sort_array(new_array);
  print_array(new_array);
  printf("\n");
  int c = array_count(new_array, 11);
  print_array(new_array);
  printf("\n");
  int first = pick(new_array, 11);
  print_array(new_array);
  printf("\n");



  printf("Hello World\n");
  return 0;
}