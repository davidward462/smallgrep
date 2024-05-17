#include <stdio.h>
#include <string.h>
#include "lib.h"

void check_line(char *line, char* query)
{
        // Check line to see if query is in the line
        char *substring = strstr(line, query);

        if (substring != NULL) {

                // print the line in which the query was found
                printf("%s", line);
        }
}

void run(char *query, FILE *file)
{
        int max_line_length = 2048;
        char line[max_line_length];

        // Iterate through lines of file
        while(fgets(line, max_line_length, file)) {
                check_line(line, query);
        }
}
