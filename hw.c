#include<stdio.h>

// Hardy-Weingberg Principle

void next_generation(float a1a1, float a2a2, float a1a2) {
    
    a1a1 = p * p;
    a1a2 = 2 * p * q;
    a2a2 = q * q;
    
    printf("generation 1 %s %s %s", a1a1, a2a2, a1a2);
}

int main(){

    float a1a1 = 0.15;
    float a2a2 = 0.35;

    float a1a2 = 1 - (a1a1 - a1a2);

    float p = a1a1 + (a2a2/2);
    float q = 1- p;
    
     printf("generation 0 %s %s %s", a1a1, a2a2, a1a2);
    
    // calculing the next generation 
    
    next_generation(float a1a1, a2a2, a1a2);
    
    int number_iterations;



    return 0;


}


