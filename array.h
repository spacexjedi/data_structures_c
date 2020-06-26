#include<stdio.h>
#include<stdlib.h>

typedef struct {
    int* arr; 
    int size;
    int num_elements;
} Array;

Array* create_array(); // create 
void insert(Array* a, int position, int element); // insert
void push(Array* a, int element); // push end
void pop(Array* a); // remove end
void remove_elem(Array* a, int position); // remove
int array_count(Array* a, int element); // search
void update(Array* a, int position, int element); // update
void sort_array(Array* a); // sort
void print_array(Array* a); // print
void increase_array(Array* a); // increase
int pick(Array* a, int element); // pick

Array* create_array(){
	Array* a = (Array*) malloc(sizeof(Array));
	a->arr = (int*) calloc(10, sizeof(int));
	a->size = 10;
	a->num_elements = 0;
	
	return a;
}

void insert(Array* a, int position, int element){
	if(position > a->size)
		printf("\n not valid position!");
	else
		if(a->arr[position] != NULL)
			printf("\n not empty position");
		else {
			a->arr[position] = element;
			a->num_elements++;
		}
}

void push(Array* a, int element){
	if(a->num_elements == a->size)
		increase_array(a);
	
	a->arr[a->num_elements] = element;
	a->num_elements++;	
}

void pop(Array* a){
	a->arr[a->num_elements] = NULL;
	a->num_elements--;
}

void remove_elem(Array* a, int position){
	if(position > a->size)
		printf("\n not valid position!");
	else {
		a->arr[position] = NULL;
		a->num_elements--;
	}
}

int array_count(Array* a, int element){
	int temp = 0, i;
	
	for(i = 0; i < a->size; i++)
		if(a->arr[i] == element)
			temp++;
	
	return temp;
}

int pick(Array* a, int element){
	int pos = 0, i;
	
	for(i = 0; i < a->element; i++)
		if(a->arr[i] == element)
			pos = i;
	
	return pos;
}

void update(Array* a, int position, int element){
	if(a->arr[position] == NULL)
		printf("\n empty position");
	else {
		a->arr[position] = element;
		a->num_elements++;
	}
}

void print_array(Array* a){
	int i;
	
	printf("\n Array: ");
	for(i = 0; i < a->size; i++){
		printf("%d ", a->arr[i]);
	}
}

void sort_array(Array* a){
	int i, j;
	for(i = 1; i < a->size; i++){
        int element = a->arr[i];
        j = i - 1;
        while(j >= 0 && element < a->arr[j]){
            a->arr[j+1] = a->arr[j];
            j--;
        }
        a->arr[j+1] = element;
    }
}

void increase_array(Array* a){
	int i, temp;
	temp = a->size;
	
	int* aa = (int*) calloc(a->size, sizeof(int));
	a->size += 10;
	
	for(i = 0; i < temp; i++)
		aa[i] = a->arr[i]; 
	free(a->arr);
	
	a->arr = (int*) calloc(a->size, sizeof(int));
	for(i = 0; i < temp; i++)
		a->arr[i] = aa[i]; 
	free(aa);	
}
