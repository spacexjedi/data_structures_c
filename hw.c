#include<stdio.h>

// Hardy-Weingberg Principle

int main(){

    float a1a1 = 0.15;
    float a2a2 = 0.35;

    float a1a2 = 1 - (a1a1 - a1a2);

    float p = a1a1 + (a2a2/2);
    float q = 1- p;


    return 0;


}


