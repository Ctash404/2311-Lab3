#include "Lab3Fgetc.h"
#include <stdio.h>
#include <stdlib.h>
int main(int argc, char* argv[])
{
    FILE * in;

    in = fopen(argv[1], "r");
    if (in == NULL)
    {
        return -1;
    }
    start(in);

    fclose(in);

    return 0;
}
