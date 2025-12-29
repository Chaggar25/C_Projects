// write a program tha counts characters
#include <stdio.h>

int main(void)
{
    int c, nc;

    while((c = getchar())!= EOF)
        ++nc;
    
    printf("%d\n", nc);
}