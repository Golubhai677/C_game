// number guessing name .....
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

    int main() {
        srand(time(0));

        int randomnum  = (rand() % 10) + 1;
        int no_of_gueesses = 0;
        int guessed;
        //printf("random no=%d",randomnum);

    do {
        printf("guesss the number ");
        scanf("%d",&guessed);
        if(guessed > randomnum) {
            printf("lower number please\n ");
        }
        else if (randomnum>guessed){
            printf("higher number please\n ");
        } else
        printf("You Win !!\n ");
        no_of_gueesses++;
    

        } while(guessed != randomnum);

        printf("you guessed the number in %d guessses ", no_of_gueesses);










        return 0;
    }
