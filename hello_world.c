# include <stdio.h>

// int main(void)
// {
//     printf("Hello World\n");
//     return 0;
// }

int main(void)
{
    // float fahr, celsius;
    // int lower, upper, step;

    // lower = 0;
    // upper = 300;
    // step = 20;

    // printf("Fahrenheit-Celsius table\n");
    // fahr = lower;
    // while (fahr <= lower) {
    //     celsius = (5.0/9.0) * (fahr - 32.0);
    //     printf("%3.0f %6.1f\n", fahr, celsius);
    //     fahr = fahr + step; 
    // }

    // printf("Celcius-Farenheit table\n");
    // celsius = lower;
    // while (celsius <= lower) {
    //     fahr = (celsius * (5.0/9.0)) + 32.0;
    //     printf("%6.1f %3.0f\n", celsius, fahr);
    //     celsius = celsius + step;
    // }

    // printf("This is reversed order\n");
    // for(fahr = 300; fahr >= 0; fahr = fahr - 20)
    //     printf("%3d %6.1f\n", fahr, (5.0/9.0) * (fahr - 32.0));




    // printf("This is normal order\n");
    // for(fahr = 0; fahr <= 300; fahr = fahr + 20)
    //     printf("%3d %6.1f\n", fahr, (5.0/9.0) * (fahr - 32.0));


    // int c; 

    // c = getchar();
    // while (c != EOF) {
    //     putchar(c);
    //     c = getchar();
    // }


    // while((c = getchar()) != EOF){
    //     printf("Expression %d\n", c != EOF);
    // }

    // printf("Expression outside loop %d\n", c != EOF);

    // return 0;


    /* count characters in input: 1s version*/
    // long nc;

    // nc = 0; 
    // while (getchar() != EOF)
    //     ++nc;
    // printf("%1d\n", nc);

    // while((c = getchar()) != EOF)
    //     putchar(c);

    // int newline;

    // newline = 0;
    // while ((c = getchar()) != EOF)
    //     if (c == '\n')
    //         ++newline;
    // printf("%d\n", newline);

    // this code below is for counting characters
    // int c, nc, nl, bl;

    // bl = 0;
    // while((c = getchar()) != EOF)
    //     if (c == ' ')
    //         ++bl;

    // int c, nl, nw, nc, state;
    // #define IN 1
    // #define OUT 0

    // state = OUT;
    // nl = nw = nc = 0;
    // while((c = getchar()) != EOF) {
    //     ++nc;
    //     if(c == '\n')
    //         ++ nl;
    //     if(c == ' ' || c == '\n' || c == '\t')
    //         state = OUT;
    //     else if (state == OUT) {
    //         state = IN;
    //         ++nw;
    //         putchar(c);
    //     }
        
    // }
    // printf("%d %d %d\n", nl, nw, nc);



    // count digits, white spaces, others

    // int c, i, nwhite, nother;
    // int ndigit[10];

    // nwhite = nother = 0; 
    // for (i = 0; i < 10; ++i)
    //     ndigit[i] = 0;

    // while ((c = getchar()) != EOF)
    //     if (c >= '0' && c <= '9')
    //         ++ndigit[c - '0'];
    //     else if (c == ' ' || c == '\n' || c == '\t')
    //         ++nwhite;
    //     else
    //         ++nother;
    // printf("digits =");
    // for (i = 0; i <10; ++i)
    //     printf(" %d", ndigit[i]);
    // printf(", white space = %d, other = %d\n", nwhite, nother);



    // #define IN 1
    // #define OUT 0
    // #define MAXLEN 20

    // int c, state, i,j;
    // int length = 0;
    // int length_counter[MAXLEN + 1];
    
    // state = OUT;
    // for(i = 0; i <= MAXLEN; ++i)
    //     length_counter[i] = 0;

    // while ((c = getchar()) != EOF) {
    //     if(c == ' ' || c == '\n' || c == '\t') {
    //         if(state == IN) {
    //             if (length >= MAXLEN) 
    //                 ++length_counter[MAXLEN]; //overflow bin 
    //             else
    //                 ++length_counter[length];
    //             length = 0;
    //             state = OUT;    
    //         }
    //     } else {
    //         state = IN;
    //             ++length;
    //     }
    // }

    // if (state == IN)
    // {
    //     if(length >= MAXLEN)
    //         ++length_counter[MAXLEN];
    //     else
    //         ++length_counter[length];
    //     /* code */
    // }

    // for (i = 1; i <= MAXLEN; ++i)
    // {
    //     if(i == MAXLEN)
    //         printf("%2d+:", i);
    //     else
    //         printf("%2d :", i);

    //     for (j = 0; j < length_counter[i]; ++j)
    //         putchar('*');
    //     putchar('\n'); 
               
    // }
    
    
    

    // psuedo code practice A counting characters

    // int c;
    
    // while((c = getchar()) != EOF)
    //     putchar(c);


    // counting lines

    // int c, nl; 

    // nl = 0;
    // while((c = getchar()) != EOF)
    //     if(c == '\n')
    //         ++nl;
    // printf("%d\n", nl);


    // exercise c counting words

    // #define IN 1
    // #define OUT 0

    // int c, nw, state, nc, nl;

    // state = OUT;
    // nw = nc = nl = 0;

    // while((c = getchar()) != EOF){
    //     ++nc;
    //     if(c == '\n')
    //         ++nl;
    //     if(c == ' ' || c == '\n' || c == '\t')
    //         state = OUT;
    //     else if (state == OUT){
    //         state = IN;
    //         ++nw;
    //     }
    // }
    // printf("%d\n %d\n %d\n", nw, nc, nl);


    // word - length

    // define the states and MAXLEN
    // #define IN 1
    // #define OUT 0
    // #define MAXLEN 20

    // // declare the variables c, state and length and j;
    // int c, state, length, i, j;
    // // declare the length_counter variable
    // int length_counter[MAXLEN + 1];

    // // set the state to 0 and set the length to 0
    // state = 0;
    // length = 0;

    // // this is for initializing the array to 0;
    // for(i = 0; i <= MAXLEN; ++i)
    //     length_counter[i] = 0;

    // //  while a character is recieved from input till end of the file
    // while((c = getchar()) != EOF)
    // // if c is equal to a whitespace or if c is equal to a newline or if c is equal to a tab
    //     if(c == ' ' || c == '\n' || c == '\t'){
    //         // if state is equal to IN
    //         if(state == IN){
    //             // if the word is longer than what we wanted to track individually(grouping it to the maxlean bucket essentially)
    //             if(length >= MAXLEN)
    //                 ++length_counter[MAXLEN];
    //             else
    //             // word is normal length. and then reset for the next word and update the state
    //                 ++length_counter[length];
    //             length = 0;
    //             state = OUT;
    //         }
    //     } else {
    //         state = IN;
    //         ++length;
    //     }
    // if(state == IN){
    //     if(length >= MAXLEN)
    //         ++length_counter[MAXLEN];
    //     else
    //         ++length_counter[length];
    // }

    // for(i = 1; i <= MAXLEN; ++i){
    //     if(i == MAXLEN)
    //         printf("%2d+:", i);
    //     else
    //         printf("%2d :", i);
        
    //     // loop over each length_counter bucket from 1 to MAXLEN
    //     for(j = 0; j < length_counter[i]; ++j)
    //         putchar('*');
    //     putchar('\n');
    // }



    


}
    
    




        

    

