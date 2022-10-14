#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define BUF_SIZE 80

int main(int argc, char *argv[]) {

    if (argc < 3) {
        printf("Enter size (MB) and filename [size] [filename]\n");
        exit(0);
    }

    FILE *file;
    file = fopen(argv[2],"w+b");
    if(!file) {
        printf("error open or create file \n");
        exit(0);
    }
    printf("file %s successfully opened\n", argv[2]);

    int dataSize = atoi(argv[1]);
	dataSize > 1 ? printf("matrix correct \n") : exit(0);
	do {
		int dimensions = rand() % 3 + 1;
        for (int rows = 0; rows < dimensions; rows++){
            for (int columns = 0; columns < dimensions; columns++){
                fprintf(file,"%d ", rand()%999 + 1);
            }
            fprintf(file,"\n");
		}
		dataSize -= dimensions * dimensions * 4;
		if(dataSize<=0) break;
    } while(dataSize>0);

    fprintf(file, "\n");
    printf("Matrices successfully generated\n");
    fclose(file);
}