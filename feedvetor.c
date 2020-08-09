#include <stdio.h>
#include <stdlib.h>

/* TAM deve assumir os valores 100, 5000, 100000 */

#define TAM 100000

int main(int argc, char const *argv[])
{
	int v[TAM];
	int i;

	for (i = 0; i < TAM; i++)
	{
		v[i] = i;
	}

	FILE* file;
	file = fopen ("entrada3.txt","w");

	    for(i=0;i<TAM;i++){
        fprintf(file, "%d\n", v[i]);
    }

    fclose(file);

	return 0;
}
