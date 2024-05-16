#include <stdio.h>
#include <string.h>
#include "lib.h"

void run(char *query, FILE *file)
{
        // TODO: determine line length
        char string[100];

        // Iterate through lines of file
        while(fgets(string, 100, file)) {

                // Check line to see if query is in the line
                if (strstr(string, query) != NULL) {
                        // if string query was found
                        printf("%s", string);
                }
        }
}
