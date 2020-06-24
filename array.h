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
void init_array(Array *a, int element, int num_elements);
// Add more space
void increase_array(Array *a, int size);
// Add element to the end of the array
void push_array (Array* a, int element);
// Print array
void print_array(Array* a);
// Sort array asc
void sort_asc_array(Array *a);
// Sort array des
void sort_desc_array(Array *a);
// update ?
void update_array(Array *a, int pos, int element);
// Insert element
void insert_element(Array *a, int pos, int element);
// Remove element
void remove_element(Array *a, int pos, int element);
// Search an element
int search_element(Array *a, int element);


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
void sort_asc_array(Array *a){
  int i, j, k = 0;
  for(i = 0; i < a->size; ++i) {
    for(j = 0; j < a->size; ++i){
      if(a->arr[i] < a->arr[j]) {
        k = a->arr[i];
        a->arr[i] = a->arr[j];
        a->arr[j] = k;
      }
    }
  }

}

// Sort array des
void sort_desc_array(Array *a) {
   int i, j, k = 0;
  for(i = 0; i < a->size; ++i) {
    for(j = 0; j < a->size; ++i){
      if(a->arr[i] > a->arr[j]) {
        k = a->arr[i];
        a->arr[i] = a->arr[j];
        a->arr[j] = k;
      }
    }
  }
}

// update ?
void update_array(Array *a, int pos, int element) {
  if(a->size != 0 && pos <= a->size && pos > 0)
		a->arr[pos-1] = element;
}

// Insert element
void insert_element(Array *a, int pos, int element) {

  if(pos <= a->size || a->size != 0){
		int s = a->size, i, j, k = 0;
		int A[s-1], AA[s];

		for(i = 0; i < s; ++i){
			AA[i] = a->arr[i];
		}

		for(i = 0, j = 0; i < s; ++i){
			if(i == (pos-1) && a->arr[i] == element)
				++k;
			else{
				A[j] = a->arr[i];
				++j;
			}
		}
		if(k == 1){
			increase_array(a, s-2);
			for(i = 0; i < a->size; ++i){
				*(a->arr) = A[i];
				++(a->arr);
			}

			(a->arr) -= i;
			a->num_elements = i;
		}

	}

}

// Remove element
void remove_element(Array *a, int pos, int element) {

  if(pos <= a->size || a->size != 0){
		int s = a->size, i, j, k = 0;
		int A[s-1], AA[s];

		for(i = 0; i < s; ++i){
			AA[i] = a->arr[i];
		}

		for(i = 0, j = 0; i < s; ++i){
			if(i == (pos-1) && a->arr[i] == element)
				++k;
			else{
				A[j] = a->arr[i];
				++j;
			}
		}
		if(k == 1){
			increase_array(a, s-2);
			for(i = 0; i < a->size; ++i){
				*(a->arr) = A[i];
				++(a->arr);
			}

			(a->arr) -= i;
			a->num_elements = i;
		}

	}
}

// Search an element
int search_element(Array *a, int element) {
  int i, j, k = 0;
  for(i = 0; i < a->size; ++i) {
    if(a->arr[i] == element)
      return i;
  } 
  return -1;
}