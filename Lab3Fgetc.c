#include "Lab3Fgetc.h"


// Checks to see if the line being read in 
// is a commit or not.
void start(FILE* in)
{
    int c;
    do
    {
        c = fgetc(in);
        if (c == '/')
        {
            while(fgetc(in) != '\n')
            {
                rcomment(in);
            }
        }
        else
        {
            printf("%c", c);
        }
    }
    while(!feof(in));
}
// Determines if the comment is a double line "//"
// or another type of comment
void rcomment(FILE* in)
{
    if(fgetc(in) == '*')
    {
        skipM_comment(in);
    }
    else 
    {
        skipS_comment(in);
    }
}
// Ignores everthing from the commented section
void skipM_comment(FILE* in)
{
    
}
// Ignores everthing from the commented section
void skipS_comment(FILE* in)
{

}

