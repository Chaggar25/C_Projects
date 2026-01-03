#include <stdio.h>
#include <ctype.h>

int main()
{

     char questions[][100] = {"What is the largest planet in the solar system?",
                              "What is the hottest planet?",
                              "What Planet has the most moons?"};

     char options[][100] = {"A. Jupiter\nB. Saturn\nC. Uranus\nD. Neptune",
                            "A. Mercury\nB. Venus\nC. Earth\nD. Mars",
                            "A. Earth\nB. Mars\nC. Jupiter\nD. Saturn"};

     char answers[] = {'A', 'B', 'D'};



     int questionCount = sizeof(questions) / sizeof(questions[0]);

     char guess = '\0';
     int score = 0;


     printf("*** Quiz Game ***\n");
     for(int i = 0; i < questionCount; i++){
        printf("\n%s\n", questions[i]);
        printf("\n%s\n", options[i]);
        printf("\nEnter your choice: ");
        scanf(" %c", &guess);

        guess = toupper(guess);



        if(guess == answers[i]){
            printf("Correct\n");
            score++;
        } else{
            printf("Wrong\n");
        }
     }

     printf("your score is %d ouot of %d points\n", score, questionCount);

}