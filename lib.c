#include <stdio.h>
#include "lib.h"

void run(char* query, FILE* file)
{
        char string[100];
        while(fgets(string, 100, file)) {
                printf("%s", string);
        }
}
