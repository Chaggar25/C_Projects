// temperature conversion
#include <stdio.h>

int conversion(int fahr);

 int conversion(int fahr) {
        return 5 * (fahr - 32) / 9;
    }

main()
{
    int fahr; 

    for(fahr = 0; fahr <= 300; fahr += 20) {
        printf("%d\t%d\n", fahr, conversion(fahr));
    }
    return 0; 

}