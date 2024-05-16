#include <stdio.h>
#include "lib.h"

int main(int argc, char **argv)
{
        if (argc < 3) {
                // TODO: print this to stderr and exit with the correct error value
                printf("usage: ./grep <query> <filename>\n");
                return 1;
        }

        // Store variables from file arguments
        char *query = argv[1];
        char *filename = argv[2];

        // open file
        FILE *file = fopen(filename, "r");

        // check if file was opened correctly
        if (file == NULL) {
                printf("Error opening file.\n");
                return 1;
        }

        run(query, file);

        fclose(file);

        return 0;
}
