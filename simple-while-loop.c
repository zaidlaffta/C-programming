//  main.c
//  Created on 2/1/20.


#include <stdio.h>


int main() {
    int sec = 5;
    int guess;
    while(guess != 5)
    {
        printf("Enter a secret number: ");
        scanf("%d", &guess);
    }
    printf("you win\n");
    return 0;
}
