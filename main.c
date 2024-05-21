#include <stdio.h>
#include <stdlib.h>
#include "lib.h"

int main(int argc, char **argv)
{
        // check argument count
        if (argc < 3) {
                fprintf(stderr, "usage: ./grep <query> <filename>\n");
                exit(1);
        }

        // Store variables from file arguments
        char *query = argv[1];
        char *filename = argv[2];

        // open file
        FILE *file = fopen(filename, "r");

        // check if file was opened correctly
        if (file == NULL) {
                fprintf(stderr, "grep: %s: File does not exist, or you do not have permission to open it.\n", filename);
                exit(1);
        }

        run(query, file);

        fclose(file);

        return 0;
}
