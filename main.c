#include <stdio.h>

int main(int argc, char** argv)
{
        if (argc < 3) {
                // TODO: print this to stderr and exit with the correct error value
                printf("usage: ./grep <query> <filename>\n");
                return 0;
        }

        // Store variables from file arguments
        char* program_name = argv[0];
        char* query = argv[1];
        char* filename = argv[2];

        return 0;
}
