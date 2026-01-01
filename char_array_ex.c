// while (there's another line)
// if (its longer than the previous longest)
// save its length
// print longest line

#include <stdio.h>
#define MAXLEN 1000 /* maximum inut line size*/

int getline(char line[], int maxline);
void copy(char to[], char from[]);

/* print longest input line*/
main()
{
    int len;
    int max;
    char line[MAXLEN];
    char longest[MAXLEN];

    max = 0;
    while((len = getline(line, MAXLEN)) > 0)
        if(len > max) {
            max = len;
            copy(longest, line);
        }
    if (max > 0)
        printf("%s", longest);
    return 0;
}

/* getline: read a line into s, return length*/
int getline(char s[], int lim)
{
    int c, i;
    int len = 0;

    for(i = 0; (c = getchar()) != EOF && c!='\n'; ++len)
        s[i] = c;
    if (c == '\n') {
        s[i] = c;
        ++len;
    }
    s[i] = '\0';
    return len;
}

/*copy: copy 'from' into 'to': assume to is big enough */
void copy(char to[], char from[])
{
    int i; 

    i = 0;
    while((to[i] = from[i]) != '\0')
        ++i;
}