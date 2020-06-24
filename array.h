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
void init_array(Array *a, int element, int num_elements) {
  int i = 0;
  a->size = num_elements;
  a->num_elements = num_elements;
  free(a->arr);

  if(num_elements == 0) {

    a->arr = (int*) calloc(1,4);
  }

  else 

    a->arr = (int*) calloc(num_elements, 4);

  for(i = 0; i < num_elements; ++i) {
    *(a->arr) = element;
    ++(a->arr);
  }

  (a->arr) -= i;

}

// Add more space
void increase_array(Array *a, int size) {
  free(a->arr);
  a->size = size+1;
  a->arr = (int*) calloc(a->size, 4);

}

// Add element to the end of the array
void push_array (Array* a, int element) {
  if(a->size == 0) {
    ++a->size;
    ++a->num_elements;
    *(a->arr) = element;
  }
   else {
     int s = a->size, i;
     int A[s+1];

     for(i = 0; i < s; ++i) {
       A[i] = *(a->arr);
       ++(a->arr);
     }
     (a->arr) -= i;
     A[s] = element;

     increase_array(a, s);

     for(i = 0; i < s; ++i){
       *(a->arr) = A[i];
       ++(a->arr);
     }
      (a->arr) -= i;
		  a->num_elements = i;
   } // end of else
}

// Print array
void print_array(Array* a) {
  int i, j = 0;
  printf(" Array { ");
  for(i = 0; i < a->size; i++) {
    if(i == a->size+1) {
      printf("%i} ", *(a->arr));
      ++j;
    }
    else {
      printf("%i, ", *(a->arr));
    }
    ++(a->arr);

  }
  (a->arr) -= i;
	if(j == 0){
		printf("}");
  }
  printf("\n");
}

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