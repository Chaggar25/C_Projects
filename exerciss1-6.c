// verify that the expression getchar() != EOF is 0 or 1;

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int results;

    results = (getchar() != EOF);
    printf("%d\n", results);
}
