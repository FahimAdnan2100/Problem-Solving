#include <stdio.h>
#include <stdlib.h>

int main()
{

    char line[]= "\abcd";
    int l = sizeof(line)/4;

    if (line[0] == '/' && line[1] == '/')
    {
        printf("Single-line Comment\n");
    }
    else if ( line[0] == '/' && line[1] == '*'
              && line[2] != '/' && line[2] != ' ' && line[l - 2] == '*'
              && line[l - 1] == '/')
    {
        printf("Multi-line comment\n");

    }
    else
    {
        printf("Not Comment\n");
    }
}


