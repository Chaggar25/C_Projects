// Count word length
#include <stdio.h>
#define IN 1
#define OUT 0
// #define maxlen 10 turns out you dont even need this for counting words unless you are doing a histogram...

int main(void)
{
    int c, state, length;

    state = OUT;
    length = 0;
    while((c = getchar()) != EOF){
        if(c == '\n' || c == '\t' || c == ' '){
            if(state == IN){
                printf("%d\n", length);
                length = 0;
                state = OUT;
            }
        } else {
            ++length;
            state = IN;
        }
    }
    if (state = IN){
        printf("%d\n", length);
    }
        
}
