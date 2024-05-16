#include <stdio.h>
#include "lib.h"

void run(char *query, FILE *file)
{
        // TODO: determine line length
        char string[100];

        // Iterate through lines of file
        while(fgets(string, 100, file)) {
                printf("%s", string);

                // Check line to see if query is in the line
        }
}
