// count blanks, tabs and newlines
#include <stdio.h>



int main(int argc, char const *argv[])
{
    int c, nl, blanks, tabs;

    c = 0;
    nl = 0;
    blanks= 0;
    tabs = 0;

    while((c = getchar()) != EOF)
        if(c == '\n')
            ++nl;
        else if (c == '\t')
        {
            ++tabs;
        }
        else if (c == ' ')
            ++blanks;
        
    printf("%d %d %d\n", nl, blanks, tabs);
        

}

