#include <stdio.h>
#include <stdlib.h>


typedef struct  {

	int *arr;
	int size;
	int num_elements;

} Array;

// Create list
Array* create_array();
// Initialize list
void init_array(Array *v, int element, int num_elements);
// Add more space
void increase_array(Array *v, int size);
// Add element to the end of the array
void push_array (Array* v, int element);
// Print array
void print_array(Array* v);
// Sort array asc
void sort_asc_array(Array *v);
// Sort array des
void sort_desc_array(Array *v);
// update ?
void update_array(Array *v, int pos, int element);
// Insert element
void insert_element(Array *v, int pos, int valor);
// Remove element
void remove_element(Array *v, int pos, int element);
// Search an element
int search_element(Array *v, int element);


/**************************************************/


// Create list
Array* create_array() {

  Array* a = (Array*) malloc(sizeof(Array));
  a->size = 0;
  a->num_elements = 0;
  a->arr = (int*) malloc(4);

  return a;
}

// Initialize list
void init_array(Array *v, int element, int num_elements) {

}

// Add more space
void increase_array(Array *a, int size) {
  free(a->arr);
  a->size = size+1;
  a->arr = (int*) calloc(a->size, 4);

}

// Add element to the end of the array
void push_array (Array* v, int element);

// Print array
void print_array(Array* v);

// Sort array asc
void sort_asc_array(Array *v);

// Sort array des
void sort_desc_array(Array *v);

// update ?
void update_array(Array *v, int pos, int element);

// Insert element
void insert_element(Array *v, int pos, int valor);

// Remove element
void remove_element(Array *v, int pos, int element);

// Search an element
int search_element(Array *v, int element);