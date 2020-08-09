#include <stdio.h>
#include <stdlib.h>

/* TAM deve assumir os valores 100, 5000, 100000 */

#define TAM 100

int main(int argc, char const *argv[])
{
	int v[TAM];
	int i;
	int j = 0;

	for (i = TAM; i > 0; i--)
	{
		v[j] = i;
		j++;
	}

	FILE* file;
	file = fopen ("entrada6.txt","w");

	    for(i=0;i<TAM;i++){
        fprintf(file, "%d\n", v[i]);
    }

    fclose(file);

	return 0;
}
