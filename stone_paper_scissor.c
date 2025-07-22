#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>

    int main() {
        srand(time(0));

        int randomnum  = (rand() % 3) + 1;
        int no_of_gueesses = 0;
        int guessed;
        char *compguess;
        //printf("random no=%d",randomnum);
            if (randomnum==1)
                compguess="stone";
            else if (randomnum==2)
                compguess="paper";
            else if (randomnum==3)
                compguess="scissor";
            else
                printf("wrong random");
        printf("for stone input enter 1,for paper input enter 2,for scissor input enter 3\n");
        scanf("%d",&guessed);
        if (guessed > 0&&guessed <4){
            if (randomnum==1){
                if(guessed==2)
                    printf("congretulation you won the game");
                else if(guessed==3)
                    printf("you lost! computer has been guessed %s",compguess);
                else
                    printf("computer and you has been guessed same things %s",compguess);
            }
            else if (randomnum==2){
                if(guessed==3)
                    printf("congretulation you won the game");
                else if(guessed==1)
                    printf("you lost! computer has been guessed %s",compguess);
                else
                    printf("computer and you has been guessed same things %s",compguess);
            }
            else if (randomnum==3){
                if(guessed==1)
                    printf("congretulation you won the game");
                else if(guessed==2)
                    printf("you lost! computer has been guessed %s",compguess);
                else
                    printf("computer and you has been guessed same things %s",compguess);
            }
        }

            // do {
            //     printf("guesss the number ");
            //     scanf("%d",&guessed);
            //     if(guessed > randomnum) {
            //         printf("lower number please\n ");
            //     }
            //     else if (randomnum>guessed){
            //         printf("higher number please\n ");
            //     } else
            //     printf("You Win !!\n ");
            //     no_of_gueesses++;
            

            //     } while(guessed != randomnum);

       

        return 0;
    }