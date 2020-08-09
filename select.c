
/* Selection Sort  */

#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <time.h>
#include <math.h>

int count_inst = 0;


void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int selection_sort(int v[], int n)
{
    int i, j, min;

    for (i = 0; i < n-1; i++)
    {
    	count_inst++;
     
        min = i;
        for (j = i+1; j < n; j++)
        if (v[j] < v[min])
            min = j;

        swap(&v[min], &v[i]);
    }

    return count_inst;
}

void printvetor(int v[], int n)
{
    int i;
    for (i=0; i < n; i++)
        printf("%d ", v[i]);
    printf("\n");
}


void arquivo1(int tam){

    int i;
    int vay[tam];
    int ans;

    FILE *file;
    file = fopen("entrada1.txt","r"); //Definir cada arquivo de entrada

    for(i=0;i<tam;i++){
        fscanf(file,"%d",&vay[i]);
    }

    fclose(file);

	ans = selection_sort(vay, tam);

	printf("Quantidade de instruções para entrada1 %d\n", ans);
}

void arquivo2(int tam){

    int i;
    int vay[tam];
    int ans;

    FILE *file;
    file = fopen("entrada2.txt","r"); //Definir cada arquivo de entrada

    for(i=0;i<tam;i++){
        fscanf(file,"%d",&vay[i]);
    }

    fclose(file);

    ans = selection_sort(vay, tam);

    printf("Quantidade de instruções para entrada2 %d\n", ans);
}

void arquivo3(int tam){

    int i;
    int vay[tam];
    int ans;

    FILE *file;
    file = fopen("entrada3.txt","r"); //Definir cada arquivo de entrada

    for(i=0;i<tam;i++){
        fscanf(file,"%d",&vay[i]);
    }

    fclose(file);

    ans = selection_sort(vay, tam);

    printf("Quantidade de instruções para entrada3 %d\n", ans);
}

void arquivo4(int tam){

    int i;
    int vay[tam];
    int ans;

    FILE *file;
    file = fopen("entrada4.txt","r"); //Definir cada arquivo de entrada

    for(i=0;i<tam;i++){
        fscanf(file,"%d",&vay[i]);
    }

    fclose(file);

    ans = selection_sort(vay, tam);

    printf("Quantidade de instruções para entrada4 %d\n", ans);
}

void arquivo5(int tam){

    int i;
    int vay[tam];
    int ans;

    FILE *file;
    file = fopen("entrada5.txt","r"); //Definir cada arquivo de entrada

    for(i=0;i<tam;i++){
        fscanf(file,"%d",&vay[i]);
    }

    fclose(file);

    ans = selection_sort(vay, tam);
    printf("Quantidade de instruções para entrada5 %d\n", ans);
}

void arquivo6(int tam){

    int i;
    int vay[tam];
    int ans;

    FILE *file;
    file = fopen("entrada6.txt","r"); //Definir cada arquivo de entrada

    for(i=0;i<tam;i++){
        fscanf(file,"%d",&vay[i]);
    }

    fclose(file);

    ans = selection_sort(vay, tam);
    printf("Quantidade de instruções para entrada6 %d\n", ans);
}


int main(int argc, char const *argv[])
{

    struct timeval time1, time2;
    double elapsedTime; // the amount of time that has passed since a particular process started

    clock_t t1=clock();
    gettimeofday(&time1, NULL);

    int tam = 100; //Tamanho máximo de elementos em cada entrada: 1048576

    //arquivo1(tam);
    count_inst = 0;
    //arquivo2(tam);
    count_inst = 0;
    //arquivo3(tam);
    count_inst = 0;
    //arquivo4(tam);
    count_inst = 0;
    //arquivo5(tam);
    count_inst = 0;
    arquivo6(tam);

    clock_t t2=clock();
    gettimeofday(&time2, NULL);
    elapsedTime = (time2.tv_sec - time1.tv_sec) * 1000.0;      // // converte segundos to ms
    elapsedTime += (time2.tv_usec - time1.tv_usec) / 1000.0;   // // converte us to ms

    printf("Tempo de CPU: %lf ms\n", ((double)(1000.0 * (t2-t1) / CLOCKS_PER_SEC)));
    printf("Tempo real: %lf ms\n", elapsedTime);

    return 0;
}