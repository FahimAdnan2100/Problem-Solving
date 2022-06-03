#include <stdio.h>
#include <stdlib.h>


void isComment(char line[100])
{
    int l = sizeof(line)-1;
    printf("%d",l);

    if (line[0] == '/' && line[1] == '/')
    {
        printf("Single-line Comment\n");
    }
    else if ( line[0] == '/' && line[1] == '*'
              && line[2] != '/' && line[2] != '*' && line[l - 2] == '*'
              && line[l - 1] == '/')
    {
        printf("Multi-line comment\n");

    }
    else
    {
        printf("Not Comment\n");
    }

}

int main()
{

    //char line[]= "//jghj";
    //char line1[]= "/*jgdsdhdsj*/";
    char line2[]= "\*jghj*\'";

    //isComment(line);
    //isComment(line1);
    isComment(line2);




}


